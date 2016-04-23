#include"AND4.h"

AND4::AND4() {

	for (int &inp : input) {
		inp = 2;				// sets each input value to 2
	}

}

int AND4::evaluate() {

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


void AND4::setInput(int inputNum, int value) {
	input[inputNum] = value;
}
void AND4::setInputPointer(int inputNum, gate *g) {
	inputPointer[inputNum] = g;
}

void AND4::setOutputPointer(gate* g) {
	outputPointer = g;
}

void AND4::setOutputPointerField(int x) {
	outputPointerField = x;
}

void AND4::setPresentOutput(int value) {
	presentOutput = value;
}


gate* AND4::getOutputPointer() {
	return outputPointer;
}

int AND4::getOutputPointerField() {
	return outputPointerField;
}

int AND4::getPresentOutput() {
	return presentOutput;
}