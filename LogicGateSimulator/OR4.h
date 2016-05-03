#pragma once
#include"gate.h"
#include"OR.h"

// Class for OR4 gate. Inherits from OR gate.
class OR4 : public OR<4> {

public:
	OR4() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
