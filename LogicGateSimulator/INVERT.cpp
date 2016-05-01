#include"INVERT.h"


	INVERT::INVERT() {
		presentOutput = 2;
		input[0] = 2;
	}




	int INVERT::evaluate() {

		if (input[0] == 1 || input[0] == 0) {
			return !input[0];
		}else {
			return 2;
		}

			


	}

	void INVERT::setInput(int inputNum, int value) {
		input[inputNum] = value;
	}

	void INVERT::setOutputPointer(gate* g) {
		outputPointer = g;
	}

	void INVERT::setOutputPointerField(int x) {
		outputPointerField = x;
	}

	void INVERT::setPresentOutput(int value) {
		presentOutput = value;
	}

	void INVERT::setInputPointer(int n, gate* g) {
		inputPointer[n] = g;
	}

	void INVERT::setInputPointers(std::vector<gate*> &list) {
		inputPointer[0] = list[input[0]];
		input[0] = 2;
	}

	int INVERT::getPresentOutput() {
		return presentOutput;
	}

	gate* INVERT::getOutputPointer() {
		return outputPointer;
	}

	int INVERT::getOutputPointerField() {
		return outputPointerField;
	}

	bool INVERT::inputHasChanged() {
		bool hasChanged = false;
		if (input[0] != inputPointer[0]->getPresentOutput()) {
			hasChanged = true;
			input[0] = inputPointer[0]->getPresentOutput();
		}
		return hasChanged;
	}




