#pragma once
#include"gate.h"
class AND4 : public gate {

private:
	int input[4];
	gate *inputPointer[4];
	int inputPointerField;

public:
	AND4::AND4();

	int AND4::evaluate();

	void AND4::setInput(int, int);

	void AND4::setOutputPointer(gate*);
	gate* AND4::getOutputPointer();

	void AND4::setOutputPointerField(int);
	int AND4::getOutputPointerField();

	void AND4::setPresentOutput(int);
	int AND4::getPresentOutput();
};
