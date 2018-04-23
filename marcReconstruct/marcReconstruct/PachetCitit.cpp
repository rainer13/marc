#include "stdafx.h"
#include "PachetCitit.h"


PachetCitit::~PachetCitit() {

	free((void *)stringinitial);

}


PachetCitit::PachetCitit(const char *s) {
	int l = strlen(s);
	stringinitial = (char *)malloc(l + 1);      //tine minte stringul din care a fost construit pachetul
	strcpy(stringinitial, s);
	if (l<7) {    //testam daca are cate caractere dorim
		flag = 1;
		return;
	}
	strcpy(lett, &s[l - 5]);
	if (s[l - 6] != ' ') {    //stim ca trb sa avem un spatiu intre indice si continut
		flag = 1;
		return;
	}
	flag = createindex(s, l - 6, indice);         //cream indicele
}


void PachetCitit::print() {
	cout << indice << " " << lett << " " << flag << "\n";
}


bool PachetCitit::createindex(const char *s, int l, int &i) { //& e un pointer gata referentiat
	i = 0;                                //incep cu 0,functia seteaza indicele din fata pachetului
	if (s[0] == '0')
		return true;
	for (int j = 0; j<l; j++) {
		if (s[j] >= '0'&&s[j] <= '9') {
			i = 10 * i + (s[j] - '0');
		}
		else
			return true;
	}
	return false;
}
