#pragma once
#include"gate.h"
template <size_t Size>
class XOR : public gate {

private:
	gate *inputPointer[Size];
	int inputPointerField;
	int counter = 0;
	int input;
	x = 1;
public:
	int input[Size];
	XOR() {
		for (int inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;
	}
	int do_evaluation(int inp, int i){
		if (inp == 2) || (input[i] == 2)
				return 2;
		if (inp != input[i]) && ((inp == 1) || (input[i] == 1))
			return 1;
		return 0;
	}

	int evaluate() {
		if (input.size > 2)
			input = input[0]
			counter = input.size
			while (counter >= 2){
				input = do_evaluation(input, x);
			x += 1
			}
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
