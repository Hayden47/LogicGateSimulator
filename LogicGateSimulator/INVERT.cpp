#include"INVERT.h"







	INVERT::INVERT() {
		input[0] = input[1] = 2;
	}




	int INVERT::evaluate() {

		if (input[0] == 1 || input[0] == 0) {
			return !input[0];
		}else {
			return 2;
		}

			


	}

	void INVERT::setInput(int inputNum, int value) {
		input[inputNum] = value;
	}

	void INVERT::setOutputPointer(gate* g) {
		outputPointer = g;
	}

	void INVERT::setOutputPointerField(int x) {
		outputPointerField = x;
	}

	gate* INVERT::getOutputPointer() {
		return outputPointer;
	}

	int INVERT::getOutputPointerField() {
		return outputPointerField;
	}




