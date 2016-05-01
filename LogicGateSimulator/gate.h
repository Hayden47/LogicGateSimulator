#pragma once
#include<vector>


 class gate {

protected:

	int delay;
	int presentOutput;

public: //Make set and get Functions
	gate::gate();

	int gate::getPresentOutput();
    virtual int gate::evaluate();
	virtual void gate::setInput(int, int);
	void gate::setDelay(int);
	void gate::setOutput(int);
	int gate::getDelay();
	virtual void gate::setInputPointer(int,gate*);
	virtual bool gate::isInput();
	virtual bool gate::inputHasChanged();
	virtual void gate::setInputPointers(std::vector<gate*>&);

	

};




