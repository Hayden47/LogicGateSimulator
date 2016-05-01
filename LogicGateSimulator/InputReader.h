#pragma once
#include<vector>
#include"gate.h"
#include<fstream>
#include<string>



	void readNetListFile(std::vector<gate*>&);

	void readInput(std::ifstream&, std::vector<gate*>&);


