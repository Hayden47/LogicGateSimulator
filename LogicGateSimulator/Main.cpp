#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<iomanip>
#include"gate.h"
#include"InputReader.h"
#include"timingWheel.h"

void printResults(std::vector<gate*>&,int);


void main() {

	std::vector<gate*> list;
	readNetListFile(list);
	std::string fileName;
	std::cout << "enter data file name(include file extension): ";
	std::cin >> fileName;
	std::ifstream inputFile;
	inputFile.open(fileName);
	int endTime;
	std::cout << "enter simulation end time: ";
	std::cin >> endTime;

	timingWheel tw;

	int simulationTime = 0;



	std::cout << std::endl << std::endl<<"     ";

	

	for (int k = 0; k < list.size(); k++) {
		std::cout << k << "   ";
	}
	std::cout << std::endl;
	for (int k = 0; k < list.size(); k++) {
		std::cout << "______";
	}
	std::cout << std::endl;

	while (simulationTime <= endTime) {
		readInput(inputFile,list);
		tw.update();
		tw.schedule(list);
		printResults(list,simulationTime);
		simulationTime++;
	}



	std::cout << "\n\n";



	/*
	
	XOR3 a1;
	a1.setInput(0, 1);
	a1.setInput(1, 1);
	a1.setInput(2, 0);
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

	*/



}


void printResults(std::vector<gate*> &list,int time) {
	std::cout << std::setw(3) <<std::left<<time << " |";
	for (gate* g : list) {
		std::cout << g->getPresentOutput() << "  |";
	}
	std::cout << std::endl;
	for (gate* g : list) {
		std::cout << "_____";
	}
	std::cout << "|";
	std::cout << std::endl;
}



