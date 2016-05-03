#include"timingWheel.h"
#include<iostream>
timingWheel::timingWheel() {
}

void timingWheel::update() {
	previousPartition = nullptr;
	if (firstPartition) {
		currentPartition = firstPartition;
		while (currentPartition) {

			if (currentPartition->getRemainingDelay() < 1) {
				currentPartition->getGatePointer()->setOutput(currentPartition->getNewValue());
				clearTimeSlot();

			}
			else {
					currentPartition->updateDelay();
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
	if(previousPartition){ //If the current partition is not the first partition
		previousPartition->setNextPartition(currentPartition->getNextPartition());
		delete currentPartition;
		currentPartition = previousPartition;
		moveToNextPartition = true;
	}
	else {//If the current patition is the first partition
		firstPartition = firstPartition->getNextPartition();
		delete currentPartition;
		currentPartition = firstPartition;
		moveToNextPartition = false;
	}
	
	

}


void timingWheel::schedule(std::vector<gate*> &list) {
	for (gate* g : list) {
		if (g->inputHasChanged()) {

			if (!g->isInput() && g->getDelay() < 1) {
				g->setOutput(g->evaluate());
			}else{
				partition *p = new partition(g);
				p->setNextPartition(firstPartition);
				firstPartition = p;
			}
		}
	}
	

}