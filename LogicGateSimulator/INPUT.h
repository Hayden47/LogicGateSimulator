#pragma once
#include"gate.h"

class INPUT : public gate{

private:
	int input[1];

public:
	INPUT::INPUT();
	int INPUT::evaluate();

	void INPUT::setInput(int, int);
	void INPUT::setPresentOutput(int);


	int INPUT::getPresentOutput();


	bool INPUT::inputHasChanged();
	bool INPUT::isInput();


};