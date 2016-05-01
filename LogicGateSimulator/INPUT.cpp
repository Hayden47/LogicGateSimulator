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

void INPUT::setPresentOutput(int value) {
	presentOutput = value;

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