#pragma once
#include"gate.h"
#include"NAND.h"
// Class for NAND4 class . Inherits from NAND class.
class NAND4 : public NAND<4> {

public:
	NAND4() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
