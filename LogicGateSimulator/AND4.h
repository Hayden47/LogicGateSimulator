#pragma once
#include"gate.h"
#include"AND.h"

// Class for AND4 gate. Inherites from AND class.
class AND4 : public AND<4> {

public:
	AND4() {
		for (int &inp : input) {
			inp = 2;				// sets each input value to 2
		}
		presentOutput = 2;

	}

};
