#include "stdafx.h"
#include "Universitate.h"
#include <string.h>
#include"Facultate.h"

Universitate::Universitate(char n[20])
{
	strncpy(nume, n, 20);
	nrfac = 0;
}

Universitate::~Universitate()
{

}

