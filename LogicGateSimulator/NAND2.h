#pragma once
#include"gate.h"
#include"NAND.h

// Class for class NAND2. Inherits from NAND class.
class NAND2 : public NAND<2> {

public:
	NAND2() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
