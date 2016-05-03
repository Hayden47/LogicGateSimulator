#pragma once
#include"gate.h"
template <size_t Size>

// Base class for NOR gates. Inherits from the gate class.
class NOR : public gate {

private:
	gate *inputPointer[Size];				// Size comes from  template. 
								// Allows for inheritance without worrying
								// about Size.
	int inputPointerField;
	int counter;
	int gate_input;
	int x;
	int z;

protected:
	int input[Size];

public:

	NOR() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;
	}
	
	// Does evaluations
	int do_evaluation(int inp, int i) {
		if ((input[i] == 0) && (inp == 0))
			return 1;

		if ((input[i] == 2) || (inp == 2))
			return 2;

		

		return 0;
	}
	
	/* Checks size to decide how it will evaluate.
	// Ex: if Size is 3. It evaluates the first two inputs
	// and then evaluates the result with the third input. */
	int evaluate() {
		if (Size > 2) {
			gate_input = input[0];
			counter = Size;
			x = 1;
			while (counter >= 2) {
				gate_input = do_evaluation(gate_input, x);
				x += 1;
				counter -= 1;
					
			}
			return gate_input;
		}
		else
			return do_evaluation(0, 1);
	}

	// Sets input of gate.
	void setInput(int inputNum, int value) {
		input[inputNum] = value;
	}

	// Sets input pointer
	void setInputPointer(int n, gate* g) {
		inputPointer[n] = g;
	}

	// Sets input pointers
	void setInputPointers(std::vector<gate*> & list) {
		for (int k = 0; k < Size; k++) {
			inputPointer[k] = list[input[k]];
			input[k] = 2;
		}
	}

	// Checks for change in inputs and updates array when changes are found.
	bool inputHasChanged() {

		bool hasChanged = false;
		int n = 0;
		for (int inp : input) {
			if (inp != inputPointer[n]->getPresentOutput())
			{
				hasChanged = true;
				inp = inputPointer[n]->getPresentOutput();
				n++;
			}

		}
		return hasChanged;

	}

}; 
