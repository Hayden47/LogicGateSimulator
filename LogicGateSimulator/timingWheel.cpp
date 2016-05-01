#include"timingWheel.h"
#include<iostream>
timingWheel::timingWheel() {
	numPartitions = 0;
}

void timingWheel::update() {
	previousPartition = nullptr;
	if (firstPartition) {
		currentPartition = firstPartition;
		while (currentPartition) {

			if (currentPartition->getRemainingDelay() < 1) {
				currentPartition->getGatePointer()->setOutput(currentPartition->getNewValue());
				//std::cout << "changing out put" << std::endl;
				clearTimeSlot();

			}
			else {
					currentPartition->updateDelay();
				//	std::cout << "updating delay" << std::endl;
					moveToNextPartition = true;
					
			}
			if(currentPartition && moveToNextPartition){
				previousPartition = currentPartition;
				currentPartition = currentPartition->getNextPartition();
			}
				

		}
	}
	
}


void timingWheel::clearTimeSlot() {
	if(previousPartition){
		previousPartition->setNextPartition(currentPartition->getNextPartition());
		delete currentPartition;
		currentPartition = previousPartition;
		moveToNextPartition = true;
		//std::cout << "Clearing time slot(not first)" << std::endl;
	}
	else {
		firstPartition = firstPartition->getNextPartition();
		delete currentPartition;
		currentPartition = firstPartition;
		moveToNextPartition = false;
		//std::cout << "Clearing time slot(first)" << std::endl;
	}
	numPartitions--;
	
	

}


void timingWheel::schedule(std::vector<gate*> &list) {
	int bob = 0;
	for (gate* g : list) {
		bob++;
		if (g->inputHasChanged()) {
				partition *p = new partition(g);
				p->setNextPartition(firstPartition);
				firstPartition = p;
			
			//std::cout<< bob << ", " << p->getNewValue()<< std::endl;
			//std::cout << "adding new partition" << std::endl;
		}
	}
	//std::cout <<std::endl;
	

}