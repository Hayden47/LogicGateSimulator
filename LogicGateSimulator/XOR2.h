#pragma once
#include"gate.h"
#include"XOR.h"

// Class for XOR2 gate. Inherits from XOR gate.
class XOR2 : public XOR<2> {

public:
	XOR2() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
