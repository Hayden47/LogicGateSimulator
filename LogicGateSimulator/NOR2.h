#pragma once
#include"gate.h"
#include"NOR.h"
class NOR2 : public NOR<2> {

public:
	NOR2() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
