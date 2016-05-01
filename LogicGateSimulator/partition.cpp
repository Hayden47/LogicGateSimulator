#include"partition.h"


partition::partition(gate* g) {
	gatePointer = g;
	delay = gatePointer->getDelay()-1;
	newValue = gatePointer->evaluate();
}

partition::~partition() {

}


gate* partition::getGatePointer() {
	return gatePointer;
}

int partition::getNewValue() {
	return newValue;
}

partition* partition::getNextPartition() {
	return nextPartition;
}

void partition::setNextPartition(partition* p) {
		nextPartition = p;
}

void partition::updateDelay() {
	delay--;
}

int partition::getRemainingDelay() {
	return delay;
}