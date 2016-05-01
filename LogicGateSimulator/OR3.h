#pragma once
#include"gate.h"
#include"OR.h"
class OR3 : public OR<3> {

public:
	OR3() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
