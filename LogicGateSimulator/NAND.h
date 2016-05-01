#pragma once
#include"gate.h"
template <size_t Size>

class NAND : public gate {

private:
	gate *inputPointer[Size];
	int inputPointerField;
	int counter;
	int gate_input;
	int x;

protected:
	int input[Size];
public:
	
	NAND() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;
	}

	int do_evaluation(int inp, int i) {
		if (inp == input[i]) {
			if ((input[i] == 1) && (inp == 1))
				return 0;
			return 1;			
		}
		else {
			if ((input[i] == 2) || (inp == 2))
				if ((input[i] == 0) || (inp == 0)) {
					return 1;
				return 0;
			}
		}
		return 1;
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
				if (counter == 1)
					return gate_input;
			}
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

	void setInputPointer(int n, gate* g) {
		inputPointer[n] = g;
	}

	void setOutputPointerField(int x) {
		outputPointerField = x;
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
		for (int k = 0; k < Size; k++) {
			if (input[k] != inputPointer[k]->getPresentOutput()) {
				hasChanged = true;
				input[k] = inputPointer[k]->getPresentOutput();
			}
		}
		return hasChanged;

	}
};
