#include"OR2.h"

OR2::OR2() {
	OR2::input[0] = input[1] = 2;
}

int OR2::evaluate() {

	if (input[0] == input[1]) {

		return 0;

	}
	else if (input[0] == 1 || input[1] == 1) {

		return 1;

	}
	else {

		return 2;

	}
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