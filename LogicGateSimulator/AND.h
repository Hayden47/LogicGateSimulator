#pragma once
#include"gate.h"
template <size_t Size>	
// Base class for AND gates. Inherits from the gate class.
class AND : public gate {

private:
	gate *inputPointer[Size];				// Size comes from  template. 
								// Allows for inheritance without worrying
								// about Size.
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
		for (int inp : input) {				// if any inputs are 0 it will return 0
			if (inp == 0)
				return 0;
		}

		for (int inp : input) {				//if no inputs are zero, but any of them are 2 it will return 2
			if (inp == 2)
				return 2;
		}

		return 1;					//if no inputs are 0 and no inputs are 2 it will return 1
	}
	
	// Sets input of gate.
	void setInput(int inputNum, int value) {
		input[inputNum] = value;
	}
	
	// Sets input pointer
	void setInputPointer(int n,gate* g) {
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

