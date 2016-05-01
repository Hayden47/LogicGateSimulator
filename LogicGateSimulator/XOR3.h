#pragma once
#include"gate.h"
#include"XOR.h"
class XOR3 : public XOR<3> {

public:
	XOR3() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
