#pragma once
#ifndef UNIVERSITATE_H
#define UNIVERSITATE_H
#include "Facultate.h"
#include <string.h>
#include <iostream>
#include <fstream>
using namespace std;


class Universitate
{
public:
	Universitate(char a[20]);
	char nume[20];
	Facultate *facultati[30];
	int nrfac;
	void addfac(Facultate* f) {
		++nrfac;
		facultati[nrfac] = f;
	};

	Facultate* facMulteSpec() {
		Facultate *f = facultati[1];
		for (int i = 2; i <= nrfac; ++i) {
			if (facultati[i]->nrl + facultati[i]->nrm > f->nrm + f->nrl)
				f = facultati[i];
		}
		return f;
	}


	Facultate** operator-(Universitate &u1) {
		Facultate* fac[30];
		fac[0] = NULL;
		int n = 0;
		for (int i = 1; i <= nrfac; ++i) {
			for (int j = 1; j <= u1.nrfac; ++j)
				if (strcmp(facultati[i]->nume, u1.facultati[j]->nume) == 0) {
					fac[n] = facultati[i];
					++n;
					j = u1.nrfac + 1;
					fac[n] = NULL;
				}
		}
		return fac;
	}


	virtual ~Universitate();

	friend ostream& operator<<(ostream &os, Universitate &u) {
		os << "Numele universitatii este: " << u.nume << " si are urm facultati\n";
		for (int i = 1; i < u.nrfac; ++i) {
			os << *(u.facultati[i]);
		}
		os << "\n\n";
		return os;
	}

	int getNrSpec(){
		int nrs = 0;
		for (int i = 1; i <= nrfac; ++i) {
			nrs += facultati[i]->nrl + facultati[i]->nrm;
		}
		return nrs;
	}

    protected:

    private:
};

#endif // UNIVERSITATE_H

