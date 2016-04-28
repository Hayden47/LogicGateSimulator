#pragma once
#include"gate.h"
#include"NAND.h"
class NAND2 : public NAND<2> {

public:
	NAND2() {
		for (int inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
