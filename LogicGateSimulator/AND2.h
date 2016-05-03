#pragma once
#include"gate.h"
#include"AND.h"

// Class for AND2 gate. Inherites from AND class.
class AND2 : public AND<2> {

public:
	AND2() {
		for (int inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
