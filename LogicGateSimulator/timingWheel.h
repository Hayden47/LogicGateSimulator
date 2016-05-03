#pragma once
#include"partition.h"
#include"gate.h"
#include<vector>
class timingWheel {

private:
	bool moveToNextPartition; //Used when deleting a partition.
	partition *firstPartition = nullptr; //Pointer to the first partition in the linked list 
	partition *previousPartition = nullptr;// Pointer to previos partition in the linked list.
	partition *currentPartition = nullptr;//Pointer to the current partition.

public:

	timingWheel::timingWheel();
	void timingWheel::update();// Updates each partition
	void timingWheel::schedule(std::vector<gate*>&);//Checks if if the inputs to any gates has chaned, and if so, it adds a partition to it in the timing wheel.
	void timingWheel::clearTimeSlot();//Deletes the current partition.

};