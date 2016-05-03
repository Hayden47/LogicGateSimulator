#include"INPUT.h"

INPUT::INPUT() {
	presentOutput = 2;
	input[0] = 2;
}

// Evaluates 
int INPUT::evaluate() {
	return input[0];
}

// Sets input 
void INPUT::setInput(int inputNum, int value) {
	input[inputNum] = value;
}

// Sets the present output
void INPUT::setPresentOutput(int value) {
	presentOutput = value;

}

// Gets present output
int INPUT::getPresentOutput() {
	return presentOutput;
}

// Checks for change in inputs and updates array when changes are found.
bool INPUT::inputHasChanged() {
	return (presentOutput != input[0]);
}

// Returns true
bool INPUT::isInput() {
	return true;
}
