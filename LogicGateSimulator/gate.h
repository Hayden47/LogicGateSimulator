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

    virtual int gate::evaluate();
	virtual gate* gate::getOutputPointer();
	virtual int gate::getOutputPointerField();
	virtual void gate::setInput(int, int);
	

};




