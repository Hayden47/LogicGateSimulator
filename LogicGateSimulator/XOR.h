#pragma once
#include"gate.h"
template <size_t Size>
class XOR : public gate {

private:
	gate *inputPointer[Size];
	int inputPointerField;
	int true_inputs = 0
	int unknown_inputs = 0
public:
	int input[Size];
	XOR() {
		for (int inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;
	}

	int evaluate() {
		for (int inp : input) {
			if (inp == 1)
				true_inputs += 1;
			if (inp == 2)
				unknown_inputs += 1;
		}

		if (true_inputs > 1)
			return 0;

		if (true_inputs == 1) && (unknown_inputs == 0)
			return 1;

		if (unknown_inputs > 0)
			return 2;
		return 0;
		}


		

		return 1;
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
