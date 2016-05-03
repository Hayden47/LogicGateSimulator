#pragma once
#include"gate.h"
#include"XOR.h"

// Class for XOR4 gate. Inherits from XOR gate.
class XOR4 : public XOR<4> {

public:
	XOR4() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
