#pragma once
#include"gate.h"
class partition {
private: 
	gate *gatePointer;
	int newValue;
	int delay;
	partition *nextPartition = nullptr;

public:
	partition::~partition();
	partition::partition();
	partition::partition(gate*);

	gate* partition::getGatePointer();
	int partition::getNewValue();
	partition* partition::getNextPartition();

	void partition::setNextPartition(partition*);

	void partition::updateDelay();
	int partition::getRemainingDelay();


};