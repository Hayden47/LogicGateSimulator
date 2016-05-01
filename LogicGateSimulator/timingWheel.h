#pragma once
#include"partition.h"
#include"gate.h"
#include<vector>
class timingWheel {

private:
	bool moveToNextPartition;
	int numPartitions;
	partition *firstPartition = nullptr;
	partition *previousPartition = nullptr;
	partition *currentPartition = nullptr;

public:

	timingWheel::timingWheel();
	void timingWheel::update();
	void timingWheel::schedule(std::vector<gate*>&);
	void timingWheel::clearTimeSlot();

};