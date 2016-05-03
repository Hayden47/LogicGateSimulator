#pragma once
#include"gate.h"

// Class for BUFFER gate. Inherits from gate class.
class BUFFER : public gate {

private:
	int input[1];
	gate *inputPointer[1];
	int inputPointerField;
public:
	BUFFER::BUFFER();
	int BUFFER::evaluate();

	void BUFFER::setInput(int, int);
	void BUFFER::setPresentOutput(int);
	void BUFFER::setInputPointer(int, gate*);
	void BUFFER::setInputPointers(std::vector<gate*>&);

	int BUFFER::getPresentOutput();
	bool BUFFER::inputHasChanged();




};
