#pragma once
#include"gate.h"
template <size_t Size>
class AND : public gate {

private:
	gate *inputPointer[Size];
	int inputPointerField;

public:
	int input[Size];
	AND() {
		for (int inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;
	}

	int evaluate() {

		for (int inp : input) {		// if any inputs are 0 it will return 0
			if (inp == 0)
				return 0;
		}

		for (int inp : input) {		//if no inputs are zero, but any of them are 2 it will return 2
			if (inp == 2)
				return 2;
		}

		return 1;					//if no inputs are 0 and no inputs are 2 it will return 1
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

	gate* getOutputPointer() {
		return outputPointer;
	}
	int getOutputPointerField() {
		return outputPointerField;
	}

};

