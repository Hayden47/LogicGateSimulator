#pragma once
#include"gate.h"
template <size_t Size>
class NOR : public gate {

private:
	gate *inputPointer[Size];
	int inputPointerField;
	int counter;
	int gate_input;
	int x;
	int z;

protected:
	int input[Size];

public:

	NOR() {
		for (int inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;
	}
	int do_evaluation(int inp, int i) {
		if ((input[i] == 0) && (inp == 0))
			return 1;

		if ((input[i] == 2) || (inp == 2))
			return 2;

		

		return 0;
	}

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

	void setInput(int inputNum, int value) {
		input[inputNum] = value;
	}

	void setOutputPointer(gate* g) {
		outputPointer = g;
	}

	void setOutputPointerField(int x) {
		outputPointerField = x;
	}

	void setInputPointer(int n, gate* g) {
		inputPointer[n] = g;
	}

	void setInputPointers(std::vector<gate*> & list) {
		for (int k = 0; k < Size; k++) {
			inputPointer[k] = list[input[k]];
			input[k] = 0;
		}
	}

	gate* getOutputPointer() {
		return outputPointer;
	}
	int getOutputPointerField() {
		return outputPointerField;
	}

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
