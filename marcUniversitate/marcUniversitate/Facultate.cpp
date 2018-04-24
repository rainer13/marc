#include "stdafx.h"
#include "Facultate.h"
#include "Universitate.h"
#include <string.h>


Facultate::Facultate(int i, int j, char x[20])//constructorul l-am facut pt a copia numele si declarat licente si maste?
{
	nrm = j;
	nrl = i;
	strncpy(nume, x, 20);//aici ii ok nume?
}

Facultate::~Facultate()
{

}

