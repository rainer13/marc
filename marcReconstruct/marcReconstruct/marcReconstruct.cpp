// marcReconstruct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string.h>
#include <fstream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <algorithm>
#include "PachetCitit.h"

using namespace std;


int main(int argc, char **args)
{//trb facut de genul mess`, facut in QT sau prin terminal
	if (argc != 3)
		cerr << "nr gresit de argumente";
	ifstream f(args[1]);
	string str;
	int i = 0;
	PachetCitit *pachete[100];    //vector de 10 pointeri la Pachet


	while (getline(f, str)) {
		pachete[i] = new PachetCitit(str.c_str());
		++i;
	}
	/*
	for (int j = 0; j<i; j++) {
		pachete[j]->print();
	}
	*/
	cout << "\n";
	PachetCitit::reasamblare(pachete, i, args[2]);
	cout << "\n";

	return 0;
}
