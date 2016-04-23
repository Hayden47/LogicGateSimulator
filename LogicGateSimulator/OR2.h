#pragma once
#include"gate.h"


class OR2 : public gate {


private:
	virtual int input[2];
	virtual gate *inputPointer[2];
	int inputPointerField;

public:

	OR2();

	int evaluate();

	void setInput(int, int);
	void setOutputPointer(gate*);
	void setOutputPointerField(int);

	gate* getOutputPointer();
	int getOutputPointerField();





};
