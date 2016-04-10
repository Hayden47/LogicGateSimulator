#include"AND2.h"




	AND2::AND2() {
		 AND2::input[0] = input[1] = 2;
	}




	int AND2::evaluate() {

		if (input[0] == 0 || input[1] == 0) {

			return 0;

		}else if (input[0]==1 && input[1] == 1) {

			return 1;

		}else {

			return 2;

		}


	}

	void AND2::setInput(int inputNum, int value) {
		input[inputNum] = value;
	}

	void AND2::setOutputPointer(gate* g) {
		outputPointer = g;
	}

	void AND2::setOutputPointerField(int x) {
		outputPointerField = x;
	}

	gate* AND2::getOutputPointer() {
		return outputPointer;
	}

	int AND2::getOutputPointerField() {
		return outputPointerField;
	}





 


