#include "stdafx.h"
#include "Consortiu.h"
#include <string.h>

Consortiu::Consortiu(char *n)
{
	strncpy(nume, n, 20);
	nru = 0;
}

Consortiu::~Consortiu()
{
	//dtor
}

void Consortiu::addunv(Universitate *d) {
	++nru;
	univ[nru] = d;
}

