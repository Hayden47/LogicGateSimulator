#include"InputReader.h"
#include<iostream>
#include<fstream>
#include"gate.h"
#include"INPUT.h"
#include"INVERT.h"
#include"AND.h"
#include"AND2.h"
#include"AND3.h"
#include"AND4.h"
#include"OR.h"
#include"OR2.h"
#include"OR3.h"
#include"OR4.h"
#include"XOR.h"
#include"XOR2.h"
#include"XOR3.h"
#include"XOR4.h"
#include"NOR2.h"
#include"NOR3.h"
#include"NOR4.h"
#include"NAND2.h"
#include"NAND3.h"
#include"NAND4.h"

void readNetListFile(std::vector<gate*> &list) {

	std::ifstream inp;
	std::string fileName;
	std::cout << "enter netList file name(include file extension) : ";
	std::cin >> fileName;
	inp.open(fileName);
	
	int n;
	inp >> n;

	list.resize(n);
	

	std::string gateType = "";

	for (int k = 0; k < n; k++) {

		inp>> gateType;

		inp >> gateType;

		if (gateType == "INPUT") {
			
			INPUT* x;
			x = new INPUT();
			
			list[k] = (x);
		}

		else if (gateType == "AND2") {
			AND2* x;
			x = new AND2();
			list[k] = (x);
		}
		else if (gateType == "AND3") {
			AND3* x;
			x = new AND3();
			list[k] = (x);
		}
		else if (gateType == "AND4") {
			AND4* x;
			x = new AND4();
			list[k] = (x);
		}
		else if (gateType == "OR2") {
			OR2* x;
			x = new OR2();
			list[k] = (x);
		}
		else if (gateType == "OR3") {
			OR3* x;
			x = new OR3();
			list[k] = (x);
		}
		else if (gateType == "OR4") {
			OR4* x;
			x = new OR4();
			list[k] = (x);
		}
		else if (gateType == "XOR2") {
			XOR2* x;
			x = new XOR2();
			list[k] = (x);
		}
		else if (gateType == "XOR3") {
			XOR3* x;
			x = new XOR3();
			list[k] = (x);
		}
		else if (gateType == "XOR4") {
			XOR4* x;
			x = new XOR4();
			list[k] = (x);
		}
		else if (gateType == "INVERT") {
			INVERT* x;
			x = new INVERT();
			list[k] = (x);
		}
		else if (gateType == "NOR2") {
			NOR2* x;
			x = new NOR2();
			list[k] = (x);
		}
		else if (gateType == "NOR3") {
			NOR3* x;
			x = new NOR3();
			list[k] = (x);
		}
		else if (gateType == "NOR4") {
			NOR4* x;
			x = new NOR4();
			list[k] = (x);
		}
		else if (gateType == "NAND2") {
			NAND2* x;
			x = new NAND2();
			list[k] = (x);
		}
		else if (gateType == "NAND3") {
			NAND3* x;
			x = new NAND3();
			list[k] = (x);
		}
		else if (gateType == "NAND4") {
			NAND4* x;
			x = new NAND4();
			list[k] = (x);
		}

		int inputGateNumber;
		int num = 0;
		inp >> inputGateNumber;
		//std::cout << inputGateNumber << ", ";
		while (inputGateNumber != -1) {
			if (inputGateNumber > 0)
				list[k]->setInput(num,inputGateNumber-1);
			num++;
			inp >> inputGateNumber;
		//	std::cout << inputGateNumber << ", ";
		}
		//std::cout <<"\n ";

		int d;

		inp >> d;

		list[k]->setDelay(d);
	}
	for (int k = 0; k < n; k++) {
		list[k]->setInputPointers(list);
	}



}



void readInput(std::ifstream &file, std::vector<gate*> &list) {
	
	int input;
	for (gate *g : list) {
		if (g->isInput()) {
			file >> input;
			if(input>=0&&input<=2)
			{
				g->setInput(0, input);
			}
				
		}
		
	}

}