#pragma once
#include"gate.h"
template <size_t Size>

// Base class for NAND gates. Inherits from the gate class.
class NAND : public gate {

private:
	gate *inputPointer[Size];				// Size comes from  template. 
								// Allows for inheritance without worrying
								// about Size.
	int inputPointerField;
	int counter;
	int gate_input;
	int x;

protected:
	int input[Size];
public:
	
	NAND() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;
	}
	
	//if any of the inputs are 0 this will return 1, else if any are 2 it will return 2, else it will return 0
	int evaluate() {
		for (int k = 0; k < Size; k++) {
			if (input[k] == 0)
				return 1;
		}
		for (int k = 0; k < Size; k++) {
			if (input[k] == 2)
				return 2;
		}
		return 0;
	}
	
	// Sets input of gate.
	void setInput(int inputNum, int value) {
		input[inputNum] = value;
	}

	// Sets input pointer
	void setInputPointer(int n, gate* g) {
		inputPointer[n] = g;
	}

	// Sets input pointers
	void setInputPointers(std::vector<gate*> & list) {
		for (int k = 0; k < Size; k++) {
			inputPointer[k] = list[input[k]];
			input[k] = 2;
		}
	}

	// Checks for change in inputs and updates array when changes are found.
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
