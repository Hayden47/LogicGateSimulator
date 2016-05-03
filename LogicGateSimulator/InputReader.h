#pragma once
#include<vector>
#include"gate.h"
#include<fstream>
#include<string>



	void readNetListFile(std::vector<gate*>&);//Reads the netlist file and creates the gate objects.

	void readInput(std::ifstream&, std::vector<gate*>&);//Reads the input data file and updates the input values.


