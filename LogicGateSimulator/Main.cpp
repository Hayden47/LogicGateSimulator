#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include"AND2.h"
#include"AND3.h"
#include"AND4.h"
#include"INVERT.h"
#include"gate.h"
#include"INPUT.h"


void readNetListInput(std::vector<gate*>);

void main() {



	AND4 a1;
	//a1.setInput(0, 1);
	//a1.setInput(1, 1);
//	a1.setInput(2, 2);
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



void readNetListInput(std::vector<gate*> &list) {

	std::ifstream inp;
	std::string fileName;
	std::cout << "enter netList file name(include file extension) : ";
	std::cin >> fileName;
	inp.open(fileName);

	int n;
	inp >> n;

	std::string gateType = "";

	for (int k = 0; k < n; k++) {

		std::getline(inp, gateType);
		inp >> gateType;

		if (gateType == "INPUT") {
			INPUT x;
			list.push_back(&x);
		}

		else if (gateType == "AND2") {

			AND2 x;
			list.push_back(&x);

		}
		else if (gateType == "AND3") {
			AND3 x;
			list.push_back(&x);
		}
		else if (gateType == "AND4") {
			AND4 x;
			list.push_back(&x);
		}

		int inputGateNumber;
		int num = 0;
		std::cin >> inputGateNumber;
		while (inputGateNumber != -1) {
			list[k]->setInputPointer(num, list[inputGateNumber]);
			n++;
			std::cin >> inputGateNumber;
		}

		int d;

		inp >> d;

		list[k]->setDelay(d);

		

	}


}
