#pragma once
#include"gate.h"
template <size_t Size>
class OR : public gate {

private:
	gate *inputPointer[Size];
	int inputPointerField;

protected:
	int input[Size];

public:

	OR() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;
	}

	int evaluate() {

		for (int k = 0; k < Size; k++) {
			if (input[k] == 1)
				return 1;
		}

		for (int k = 0; k < Size; k++) {
			if (input[k] == 2)
				return 2;
		}
		return 0;
	}

	void setInput(int inputNum, int value) {
		input[inputNum] = value;
	}

	void setOutputPointer(gate* g) {
		outputPointer = g;
	}

	void setOutputPointerField(int x) {
		outputPointerField = x;
	}

	void setInputPointer(int n, gate* g) {
		inputPointer[n] = g;
	}

	void setInputPointers(std::vector<gate*> & list) {
		for (int k = 0; k < Size; k++) {
			inputPointer[k] = list[input[k]];
			input[k] = 0;
		}
	}

	gate* getOutputPointer() {
		return outputPointer;
	}
	int getOutputPointerField() {
		return outputPointerField;
	}

	//checks to see if any of the inputs have changed ang if so it updates the input array
	bool inputHasChanged() {

		bool hasChanged = false;
		int n = 0;
		for (int &inp : input) {
			if (inp != inputPointer[n]->getPresentOutput())
			{
				hasChanged = true;
				inp = inputPointer[n]->getPresentOutput();
			}
			n++;

		}
		return hasChanged;

	}

};

