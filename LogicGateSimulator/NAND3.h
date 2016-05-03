#pragma once
#include"gate.h"
#include"NAND.h"
// Class for NAND3 class . Inherits from gate class.
class NAND3 : public NAND<3> {

public:
	NAND3() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
