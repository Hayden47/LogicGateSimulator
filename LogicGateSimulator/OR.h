#pragma once
#include"gate.h"
template <size_t Size>
class OR : public gate {

private:
	gate *inputPointer[Size];
	int inputPointerField;

public:
	int input[Size];
	OR() {
		for (int inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;
	}

	int evaluate() {

		for (int inp : input) {
			if (inp == 1)
				return 1;
		}

		for (int inp : input) {
			if (inp == 2)
				return 2;
		}

		return 0;
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

