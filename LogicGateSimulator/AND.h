#pragma once
#include"gate.h"
template <size_t Size>
class AND : public gate {

private:
	gate *inputPointer[Size];
	int inputPointerField;

protected:
	int input[Size];

public:

	AND() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;
	}

	int evaluate() {
	

		for (int inp : input) {		// if any inputs are 0 it will return 0
			if (inp == 0)
				return 0;
		}

		for (int inp : input) {		//if no inputs are zero, but any of them are 2 it will return 2
			if (inp == 2)
				return 2;
		}

		return 1;					//if no inputs are 0 and no inputs are 2 it will return 1
	}

	void setInput(int inputNum, int value) {
		input[inputNum] = value;
	}

	void setInputPointer(int n,gate* g) {
		inputPointer[n] = g;
	}

	void setInputPointers(std::vector<gate*> & list) {
		for (int k = 0; k < Size; k++) {
			inputPointer[k] = list[input[k]];
			input[k] = 2;
		}
	}


	//checks to see if any of the inputs have changed ang if so it updates the input array
	bool inputHasChanged() {
		bool hasChanged = false;
		for (int k = 0; k < Size; k++) {
			if (input[k] != inputPointer[k]->getPresentOutput()) {
				hasChanged = true;
				input[k] = inputPointer[k]->getPresentOutput();
			}
		}
		return hasChanged;

	}

};

