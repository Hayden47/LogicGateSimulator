#pragma once
#include"gate.h"
#include"AND.h"

// Class for AND3 gate. Inherites from AND class.

class AND3 : public AND<3> {

public:
	AND3() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
