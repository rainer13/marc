#include "stdafx.h"
#ifndef PACHETCITIT_H
#define PACHETCITIT_H
#include <iostream>
#include <string.h>
#include <fstream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

class PachetCitit {
public:
	int indice;
	char lett[6], *stringinitial;
	bool flag;

	~PachetCitit();


	PachetCitit(const char *s);

	static void reasamblare(PachetCitit *pachete[], int n, char *fisier) {      //sortam si afisam textul fiecaruia in ordine

		sort(&pachete[0], &pachete[n], PachetCitit::compara);
		if (fisier == NULL) {
			for (int i = 0; i < n && pachete[i]->flag == 0; ++i) {
				cout << pachete[i]->lett;
			}
			cout << "\n";
		}
		else {
			ofstream g(fisier);
			for (int i = 0; i<n && pachete[i]->flag == 0; ++i) {
				g << pachete[i]->lett<<" ";
			}

			g << "\n";
		}
	}

	static bool compara(PachetCitit *p1, PachetCitit *p2) {
		//impart cele corecte de cele gresite(flag)
		if (p1->flag == 1)
			return 0;
		if (p2->flag == 1)
			return 1;

		//sortez dupa indice
		return p1->indice<p2->indice ? 1 : 0;

	}

	void print();


private:
	bool createindex(const char *s, int l, int &i);
};
#endif // PACHETCITIT_H
