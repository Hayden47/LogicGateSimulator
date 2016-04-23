#pragma once


 class gate {

protected:

	int delay;
	int presentOutput;
	gate *outputPointer;
	int outputPointerField;
	int evaluationMark;


public: //Make set and get Functions
	gate::gate();

	int gate::getPresentOutput();
    virtual int gate::evaluate();
	virtual gate* gate::getOutputPointer();
	virtual int gate::getOutputPointerField();
	virtual void gate::setInput(int, int);
	void gate::setDelay(int);
	int gate::getDelay();
	virtual void gate::setInputPointer(int,gate*);

	

};




