#include"AND3.h"

AND3::AND3() {

	for (int inp : input) {
		inp = 2;				// sets each input value to 2
	}

}

int AND3::evaluate() {

	for (int inp : input) {		// if any inputs are 0 it will return 0
		if (inp == 0)
			return 0;
	}

	for (int inp : input) {		//if no inputs are zero, but any of them are 2 it will return 2
			return 2;
	}

	return 1;					//if no inputs are 0 and no inputs are 2 it will return 1

}


void AND3::setInput(int inputNum, int value) {
	input[inputNum] = value;
}

void AND3::setOutputPointer(gate* g) {
	outputPointer = g;
}

void AND3::setOutputPointerField(int x) {
	outputPointerField = x;
}

void AND3::setPresentOutput(int value) {
	presentOutput = value;
}


gate* AND3::getOutputPointer() {
	return outputPointer;
}

int AND3::getOutputPointerField() {
	return outputPointerField;
}

int AND3::getPresentOutput() {
	return presentOutput;
}