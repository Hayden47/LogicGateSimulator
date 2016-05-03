#pragma once
#include"gate.h"
#include"XOR.h"

// Class for XOR3 gate. Inherits from XOR gate.
class XOR3 : public XOR<3> {

public:
	XOR3() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
