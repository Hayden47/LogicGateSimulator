#include"INPUT.h"

INPUT::INPUT() {
	presentOutput = 2;
	input[0] = 2;
}
int INPUT::evaluate() {
	return input[0];
}

void INPUT::setInput(int inputNum, int value) {
	input[inputNum] = value;
}
void INPUT::setOutputPointer(gate* g) {
	outputPointer = g;
}
void INPUT::setOutputPointerField(int x) {
	outputPointerField = x;
}
void INPUT::setPresentOutput(int value) {
	presentOutput = value;
}

gate* INPUT::getOutputPointer() {
	return outputPointer;
}
int INPUT::getOutputPointerField() {
	return outputPointerField;
}
int INPUT::getPresentOutput() {
	return presentOutput;
}
bool INPUT::inputHasChanged() {
	return (presentOutput != input[0]);
}
bool INPUT::isInput() {
	return true;
}