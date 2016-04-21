#include"OR2.h"

OR2::OR2() {
	for (int inp : input) {
		inp = 2;				// sets each input value to 2
	}
	presentOutput = 2;
}

int OR2::evaluate() {
	
	for (int inp : input){
		if (inp == 1)
			return 1;
	}
	
	for (int inp : input){
		if (inp == 2)
			return 2;
	}
	
	return 0;
}

void OR2::setInput(int inputNum, int value) {
	input[inputNum] = value;
}

void OR2::setOutputPointer(gate* g) {
	outputPointer = g;
}

void OR2::setOutputPointerField(int x) {
	outputPointerField = x;
}

gate* OR2::getOutputPointer() {
	return outputPointer;
}

int OR2::getOutputPointerField() {
	return outputPointerField;
}
