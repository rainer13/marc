// marcMakePacket.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <fstream>
#include <string.h>
#include<cstdio>
#include <algorithm>
using namespace std;

struct pachet {

	int nr;
	char a[6];
};

pachet pachete[500];
int nrp;

void constpachet(char* x, int n) {
	for (int i = 1; i <= n; i++) {
		++nrp;
		pachete[nrp].nr = nrp;
		strncpy(pachete[nrp].a, x + 5 * (i - 1), 5);//ca sa-mi copieze exact 5 crct,de la capatul ultimului pachet
	}
}

void trspachet(char a[100], bool en) {
	static char rest[6] = "\0";
	if (en == true && strlen(rest) != 0)
	{
		++nrp;
		pachete[nrp].nr = nrp;
		strcpy(pachete[nrp].a, rest);
		return;
	}
	if (en == true)
		return;
	char q[110] = "\0";
	int n = strlen(a);
	int m = strlen(rest);
	if (m != 0)
		strcpy(q, rest);
	strcat(q, a);
	if (a[n - 1] != ' ' &&a[n - 1] != '-')
		strcat(q, " ");
	m = strlen(q);
	m /= 5;
	constpachet(q, m);
	strcpy(rest, q + m * 5);
}

void afisarepachet(char *p) {

	ofstream g(p);
	for (int i = 1; i <= nrp; i++) {
		g << pachete[i].nr << " " << pachete[i].a << "\n";

	}

}

int main(int argc, char *args[])//primim parametri de functionare sau moduri
{
	char a[100];
	for (int o = 0; o<argc; o++) {

		cout << args[o] << "\n";
	}
	if (argc != 3) {
		cerr << "nr gresit";
		return 1;
	}
	FILE *f = fopen(args[1], "r");//il poate citi de oriunde doar trebuie sa=i zicem numele

	fgets(a, 100, f);
	while (!feof(f)) {
		a[strlen(a) - 1] = '\0';
		trspachet(a, false);
		fgets(a, 100, f);
	}

	trspachet("\0", true);
	fclose(f);
	//random permut
	random_shuffle(pachete + 1, pachete + nrp + 1);
	afisarepachet(args[2]);



	return 0;
}
