#pragma once
#include"gate.h"
#include"XOR.h"
class XOR2 : public XOR<2> {

public:
	XOR2() {
		for (int inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
