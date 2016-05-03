#include"BUFFER.h"

BUFFER::BUFFER() {
	presentOutput = 2;
	input[0] = 2;
}

// Evaluate function definition.
int BUFFER::evaluate() {
	return input[0];
}

// Sets input value
void BUFFER::setInput(int inputNum, int value) {
	input[inputNum] = value;
}

// Sets present output
void BUFFER::setPresentOutput(int value) {
	presentOutput = value;
}

// Sets input pointer
void BUFFER::setInputPointer(int n, gate* g) {
	inputPointer[n] = g;
}

// Sets input pointers
void BUFFER::setInputPointers(std::vector<gate*> &list) {
	inputPointer[0] = list[input[0]];
	input[0] = 2;
}

// Gets the present output
int BUFFER::getPresentOutput() {
	return presentOutput;
}

// Checks for change in inputs and updates array when changes are found.
bool BUFFER::inputHasChanged() {
	bool hasChanged = false;
	if (input[0] != inputPointer[0]->getPresentOutput()) {
		hasChanged = true;
		input[0] = inputPointer[0]->getPresentOutput();
	}
	return hasChanged;
}

