#include"AND2.h"




	AND2::AND2() {

		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;
	}




	int AND2::evaluate() {

		for (int k = 0; k < 2; k++) {
			input[k] = inputPointer[k]->getPresentOutput;
		}

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

	void AND2::setInput(int inputNum, int value) {
		input[inputNum] = value;
	}
	void AND2::setInputPointer(int inputNum, gate *g) {
		inputPointer[inputNum] = g;
	}

	void AND2::setOutputPointer(gate* g) {
		outputPointer = g;
	}

	void AND2::setOutputPointerField(int x) {
		outputPointerField = x;
	}

	void AND2::setPresentOutput(int value) {
		presentOutput = value;
	}


	gate* AND2::getOutputPointer() {
		return outputPointer;
	}

	int AND2::getOutputPointerField() {
		return outputPointerField;
	}

	int AND2::getPresentOutput() {
		return presentOutput;
	}







 


