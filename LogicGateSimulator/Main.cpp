#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include"AND2.h"
#include"INVERT.h"
#include"gate.h"

void readInput(std::vector<gate*> &list){

	std::ifstream inp;
	std::string fileName;
	std::cout << "enter netList file name(include file extension) : ";
	std::cin >> fileName;
	inp.open(fileName);
	
	int n;
	inp >> n;

	std::string gateType = "";

	for (int k = 0; k < n; k++) {
		std::getline(inp,gateType);
		inp >> gateType;

		if (gateType == "INPUT") {

			INPUT x;
			list.push_back(&x);
			
		}
		else if (gateType == "AND2") {

		}
		else if (gateType == "AND3") {

		}
		else if (gateType == "AND4") {

		}


	}


}



void main() {

	AND2 a1;
	a1.setInput(0, 1);
	a1.setInput(1, 1);
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