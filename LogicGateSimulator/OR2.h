#pragma once
#include"gate.h"
#include"OR.h"

// Class for OR2 gate. Inherits from OR gate.
class OR2 : public OR<2> {

public:
	OR2() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
