#pragma once
#include"gate.h"

class AND3 : public gate {

private:
	int input[3];
	gate *inputPointer[3];
	int inputPointerField;

public:
	AND3::AND3();

	int AND3::evaluate();

	void AND3::setInput(int, int);

	void AND3::setOutputPointer(gate*);
	gate* AND3::getOutputPointer();

	void AND3::setOutputPointerField(int);
	int AND3::getOutputPointerField();

	void AND3::setPresentOutput(int);
	int AND3::getPresentOutput();
};
