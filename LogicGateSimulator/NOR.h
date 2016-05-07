#pragma once
#include"gate.h"
template <size_t Size>

// Base class for NOR gates. Inherits from the gate class.
class NOR : public gate {

private:
	gate *inputPointer[Size];				// Size comes from  template. 
								// Allows for inheritance without worrying
								// about Size.
	int inputPointerField;
	int counter;
	int gate_input;
	int x;
	int z;

protected:
	int input[Size];

public:

	NOR() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;
	}

	//if any of the inputs are 1 this will return 0, else if any are 2 it will return 2, else it will return 1
	int evaluate() {
		for (int k = 0; k < Size; k++) {
			if (input[k] == 1)
				return 0;
		}
		for (int k = 0; k < Size; k++) {
			if (input[k] == 2)
				return 2;
		}
		return 1;
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
