#pragma once
#include"gate.h"
#include"NOR.h"

// Class for NOR4 gate. Inherits from NOR gate.
class NOR4 : public NOR<4> {

public:
	NOR4() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
