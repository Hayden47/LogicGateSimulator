#include<iostream>
#include<vector>
#include"AND2.h"
#include"INVERT.h"
#include"gate.h"

void main() {

	AND2 a1;
	a1.setInput(0, 0);
	a1.setInput(1, 2);
	std::cout << a1.evaluate() << std::endl;
	INVERT a2;
	a1.setOutputPointer(&a2);
	a1.setOutputPointerField(0);
	gate *gp;
	gp = &a1;
	int out1 = gp->evaluate();
	int inputNum = gp->getOutputPointerField();

	gate *nextg;
	nextg = gp->getOutputPointer();
	nextg->setInput(inputNum, out1);
	std::cout << "output of second gate = " << nextg->evaluate() << std::endl;


}