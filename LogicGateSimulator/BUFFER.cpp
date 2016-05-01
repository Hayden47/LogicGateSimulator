#include"BUFFER.h"

BUFFER::BUFFER() {
	presentOutput = 2;
	input[0] = 2;
}

int BUFFER::evaluate() {
	return input[0];
}

void BUFFER::setInput(int inputNum, int value) {
	input[inputNum] = value;
}


void BUFFER::setPresentOutput(int value) {
	presentOutput = value;
}

void BUFFER::setInputPointer(int n, gate* g) {
	inputPointer[n] = g;
}

void BUFFER::setInputPointers(std::vector<gate*> &list) {
	inputPointer[0] = list[input[0]];
	input[0] = 2;
}

int BUFFER::getPresentOutput() {
	return presentOutput;
}


bool BUFFER::inputHasChanged() {
	bool hasChanged = false;
	if (input[0] != inputPointer[0]->getPresentOutput()) {
		hasChanged = true;
		input[0] = inputPointer[0]->getPresentOutput();
	}
	return hasChanged;
}

