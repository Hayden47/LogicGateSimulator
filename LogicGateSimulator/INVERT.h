#pragma once
#include "gate.h"

// Class for Invert gate. Inherits from gate class.
class INVERT : public gate {

private:
	int input[1];
	gate *inputPointer[1];
	int inputPointerField;

public:

	INVERT::INVERT();
	int INVERT::evaluate();

	void INVERT::setInput(int, int);
	void INVERT::setPresentOutput(int);
	void INVERT::setInputPointer(int,gate*);
	void INVERT::setInputPointers(std::vector<gate*>&);

	int INVERT::getPresentOutput();
	bool INVERT::inputHasChanged();



};
