#include"gate.h"

gate::gate() {

}

int gate::evaluate() {
	return 2;
}

gate* gate::getOutputPointer() {
	return 0;
}

int gate::getOutputPointerField() {
	return 0;
}

void gate::setInput(int x, int y) {

}

void gate::setDelay(int d) {
	delay = d;
}

int gate::getDelay() {
	return delay;
}

int gate::getPresentOutput() {
	return presentOutput;
}