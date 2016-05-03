#pragma once
#include"gate.h"
class partition {
private: 
	gate *gatePointer;
	int newValue;//Stores the new value for the gate
	int delay;// Stores the delay value of the gate
	partition *nextPartition = nullptr;//Pointer to the next partition in the linked list

public:
	partition::~partition();
	partition::partition();
	partition::partition(gate*);

	gate* partition::getGatePointer();// Returns the pointer to the gate.
	int partition::getNewValue();//returns the new value for the gate.
	partition* partition::getNextPartition();//Returns the next partition in the linked list

	void partition::setNextPartition(partition*);// Sets nextpartition to a new partition

	void partition::updateDelay();//Updates the delay value
	int partition::getRemainingDelay();// Returns the remaining delay for the gate


};