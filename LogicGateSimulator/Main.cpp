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

	bool fileExists = true;

	std::cout << "enter data file name(include file extension): ";
	std::cin >> fileName;
	std::ifstream inputFile;
	inputFile.open(fileName);
	if (inputFile)
		fileExists = true;
	else
		fileExists = false;

	while (!fileExists) {
		if (!fileExists) {
			std::cout << "Specified file does not exist.\n";
		}
		std::cout << "enter data file name(include file extension): ";
		std::cin >> fileName;
		std::ifstream inputFile;
		inputFile.open(fileName);
		if (inputFile)
			fileExists = true;
		else
			fileExists = false;
	} 
	


	int endTime;
	std::cout << "enter simulation end time: ";
	std::cin >> endTime;

	timingWheel tw;

	int simulationTime = 0;



	std::cout << std::endl << std::endl<<"Time|";

	

	for (int k = 0; k < list.size(); k++) {
		std::cout << k << "  |";
	}
	std::cout << std::endl;
	for (int k = 0; k < list.size(); k++) {
		std::cout << "----";
	}
	std::cout << "----|" << std::endl;

	while (simulationTime <= endTime) {
		readInput(inputFile,list);
		tw.update();
		tw.schedule(list);
		printResults(list,simulationTime);
		simulationTime++;
	}
	std::cout << "\n\n";


}


void printResults(std::vector<gate*> &list,int time) {
	std::cout<< "|" << std::setw(3) <<std::left<<time << "|";
	for (gate* g : list) {
		std::cout << g->getPresentOutput() << "  |";
	}
	std::cout << std::endl;
	for (gate* g : list) {
		std::cout << "----";
	}
	std::cout << "----|";
	std::cout << std::endl;
}



