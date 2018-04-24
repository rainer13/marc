#pragma once
#ifndef FACULTATE_H
#define FACULTATE_H

#include <string.h>
#include <iostream>
#include <fstream>
using namespace std;


class Facultate
{
public:
	Facultate(int l, int m, char k[20]);
	int nrl, nrm;
	char nume[20];

	virtual ~Facultate();

	friend ostream& operator<<(ostream &os, Facultate &f) {
		os <<"Facultatea "<< f.nume << " are urmatorul numar d eprograme de licenta si respectiv master " << f.nrl << " " << f.nrm << "\n";
		return os;
	}

	

protected:

private:
};

#endif // FACULTATE_H


