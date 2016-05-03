#pragma once
#include"gate.h"
#include"NOR.h"

// Class for NOR3 gate. Inherits from NOR gate.
class NOR3 : public NOR<3> {

public:
	NOR3() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
