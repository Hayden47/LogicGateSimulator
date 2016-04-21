#pragma once
#include"gate.h"

class AND2 : public gate {


private: 
	int input[2];
	gate *inputPointer[2];
	int inputPointerField;

public: 
	
	AND2::AND2();

	int AND2::evaluate();

	void AND2::setInput(int,int);

	void AND2::setOutputPointer(gate*);
	gate* AND2::getOutputPointer();

	void AND2::setOutputPointerField(int);
	int AND2::getOutputPointerField();

	void AND2::setPresentOutput(int);
	int AND2::getPresentOutput();
	
	
	




};
