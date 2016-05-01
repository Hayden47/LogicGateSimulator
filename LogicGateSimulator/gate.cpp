#include"gate.h"

gate::gate() {

}

int gate::evaluate() {
	return 2;
}


void gate::setInput(int x, int y) {

}

void gate::setDelay(int d) {
	delay = d;
}

void gate::setInputPointer(int n, gate* g) {

}

void gate::setOutput(int value) {
	presentOutput = value;
}

int gate::getDelay() {
	return delay;
}

int gate::getPresentOutput() {
	return presentOutput;
}
bool gate::isInput() {
	return false;
}
bool gate::inputHasChanged() {
	return false;
}
void gate::setInputPointers(std::vector<gate*> &list) {

}