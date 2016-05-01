#pragma once
#include "gate.h"

class INVERT : public gate {

private:
	int input[1];
	gate *inputPointer[1];
	int inputPointerField;

public:

	INVERT::INVERT();
	int INVERT::evaluate();

	void INVERT::setInput(int, int);
	void INVERT::setOutputPointer(gate*);
	void INVERT::setOutputPointerField(int);
	void INVERT::setPresentOutput(int);
	void INVERT::setInputPointer(int,gate*);
	void INVERT::setInputPointers(std::vector<gate*>&);

	gate* INVERT::getOutputPointer();
	int INVERT::getOutputPointerField();
	int INVERT::getPresentOutput();
	bool INVERT::inputHasChanged();



};
