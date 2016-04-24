#pragma once
#include"gate.h"
#include"OR.h"
class OR4 : public OR<4> {

public:
	OR4() {
		for (int inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
