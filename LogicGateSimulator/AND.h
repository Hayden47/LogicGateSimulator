#pragma once
#include"gate.h"

template <size_t Size>	
// Base class for AND gates. Inherits from the gate class.
// Uses a template for generic sizing. 

class AND : public gate {

private:
	gate *inputPointer[Size];				// Size comes from  template. 
								// We can implement AND gates of any size.
	int inputPointerField;
	
protected:
	int input[Size];
	
public:
	AND() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2 (Means input is unknown currently)
		}
		presentOutput = 2;
	}
	
	// Evaluates just like an AND gate should
	// Only returns True when two inputs are 1
	// If an input is 2 (unknown) then it returns 2 because the output could be 1 or 0.
	
	int evaluate() {
		for (int inp : input) {				
			if (inp == 0)
				return 0;
		}

		for (int inp : input) {				
			if (inp == 2)
				return 2;
		}

		return 1;					
	}
	
	// Sets input of gate to a value passed 
	void setInput(int inputNum, int value) {
		input[inputNum] = value;
	}
	
	// Sets input pointer to some gate pointer passed
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
	// For each k input it will compare to the present output of the kth element in the inputPointer array
	// Returns true if input has changed
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

