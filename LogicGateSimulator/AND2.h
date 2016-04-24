#pragma once
#include"gate.h"
#include"AND.h"
class AND2 : public AND<2> {

public:
	AND2() {
		for (int inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
