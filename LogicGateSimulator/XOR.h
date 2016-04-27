#pragma once
#include"gate.h"
template <size_t Size>
class XOR : public gate {

private:
	gate *inputPointer[Size];
	int inputPointerField;
	int counter;
	int gate_input;
	int x;
public:
	int input[Size];
	XOR() {
		for (int inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;
	}
	int do_evaluation(int inp, int i) {
		if ((input[i] == 2) || (inp == 2))
			return 2;
		if (inp != input[i]) {
			if ((input[i] == 1) || (inp== 1))
				return 1;
		}
		return 0;
	}

	int evaluate() {
		if (Size > 2) {
			gate_input = input[0];
			counter = Size;
			x = 1;
			while (counter >= 2){
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
