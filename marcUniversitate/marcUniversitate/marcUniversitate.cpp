// marcUniversitate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <string.h>
using namespace std;


#include "Facultate.h"
#include "Universitate.h"
#include "Consortiu.h"

/*
Facultate* operator-(Universitate &u1, Universitate &u2) {
	Facultate* fac[30];
	fac[0] = NULL;
	int n = 0;
	for (int i = 1; i <= u1.nrfac; ++i) {
		for (int j = 1; j <= u2.nrfac; ++j)
			if (strcmp(u1.facultati[i]->nume, u2.facultati[j]->nume) == 0) {
				fac[n] = u1.facultati[i];
				++n;
				j = u2.nrfac + 1;
				fac[n] = NULL;
			}
	}
	return fac[0];
}
*/


int main()
{
	Facultate f11 = Facultate(11, 11, "a"), f12 = Facultate(22, 22, "b"), f13 = Facultate(33, 33, "c"), f14 = Facultate(44, 44, "d"), f15 = Facultate(55, 55, "e"), f16 = Facultate(66, 66, "f"), f17 = Facultate(77, 77, "g"), f18 = Facultate(88, 88, "h");
	Facultate *f = new Facultate(1, 1, "i"), *f2 = new Facultate(2, 2, "j"), *f3 = new Facultate(3, 3, "k"), *f4 = new Facultate(4, 4, "l"), *f5 = new Facultate(5, 5, "m"), *f6 = new Facultate(6, 6, "n"), *f7 = new Facultate(7, 7, "o"), *f8 = new Facultate(8, 8, "p");

	Facultate f21 = Facultate(11, 11, "a1"), f22 = Facultate(22, 22, "b2"), f23 = Facultate(33, 33, "c3"), f24 = Facultate(44, 44, "d4"), f25 = Facultate(55, 55, "e5"), f26 = Facultate(66, 66, "f6"), f27 = Facultate(77, 77, "g7"), f28 = Facultate(88, 88, "h8");
	Facultate *fa = new Facultate(1, 1, "i1"), *fs = new Facultate(2, 2, "j2"), *fd = new Facultate(3, 3, "k3"), *ff = new Facultate(4, 4, "l4"), *fg = new Facultate(5, 5, "m5"), *fh = new Facultate(6, 6, "n6"), *fi = new Facultate(7, 7, "o7"), *fj = new Facultate(8, 8, "p8");

	Facultate f31 = Facultate(11, 11, "a31"), f32 = Facultate(22, 22, "b32"), f33 = Facultate(33, 33, "c33"), f34 = Facultate(44, 44, "d34"), f35 = Facultate(55, 55, "e35"), f36 = Facultate(66, 66, "f36"), f37 = Facultate(77, 77, "g37"), f38 = Facultate(88, 88, "h38");
	Facultate *f01 = new Facultate(1, 1, "i11"), *f02 = new Facultate(2, 2, "j22"), *f03 = new Facultate(3, 3, "k33"), *f04 = new Facultate(4, 4, "l44"), *f05 = new Facultate(5, 5, "m55"), *f06 = new Facultate(6, 6, "n66"), *f07 = new Facultate(7, 7, "o77"), *f08 = new Facultate(8, 8, "p88");

	Universitate *a = new Universitate("a"), *b = new Universitate("b"), *c = new Universitate("c");

	Consortiu *z = new Consortiu("q");

	a->addfac(&f11);
	a->addfac(&f12);
	a->addfac(&f13);
	a->addfac(&f14);
	a->addfac(&f15);
	a->addfac(&f16);
	a->addfac(&f17);
	a->addfac(&f18);
	a->addfac(f);
	a->addfac(f2);
	a->addfac(f3);
	a->addfac(f4);
	a->addfac(f5);
	a->addfac(f6);
	a->addfac(f7);
	a->addfac(f8);


	b->addfac(&f21);
	b->addfac(&f22);
	b->addfac(&f23);
	b->addfac(&f24);
	b->addfac(&f25);
	b->addfac(&f26);
	b->addfac(&f27);
	b->addfac(&f28);
	b->addfac(fa);
	b->addfac(fs);
	b->addfac(fd);
	b->addfac(ff);
	b->addfac(fg);
	b->addfac(fh);
	b->addfac(fi);
	b->addfac(fj);


	c->addfac(&f31);
	c->addfac(&f32);
	c->addfac(&f33);
	c->addfac(&f34);
	c->addfac(&f35);
	c->addfac(&f36);
	c->addfac(&f37);
	c->addfac(&f38);
	c->addfac(f01);
	c->addfac(f02);
	c->addfac(f03);
	c->addfac(f04);
	c->addfac(f05);
	c->addfac(f06);
	c->addfac(f07);
	c->addfac(f08);

	z->addunv(a);
	z->addunv(b);
	z->addunv(c);

	//afisare

	Universitate *univ[30];

	memset(univ, NULL, 30 * sizeof(Universitate*));
	univ[0] = a;
	univ[2] = b;
	univ[1] = c;

	Universitate **u = &(univ[0]);

	while ((*(u)) != NULL) {
		cout << (*(*(u)));
		++u;
	}

	u = &(univ[0]);

	while ((*(u)) != NULL) {
		cout <<(*(u))->nume<<" "<< *((*(u))->facMulteSpec())<<"\n";
		++u;
	}

	cout << *z << "\n\n";;

	Universitate *xx = z->getUnivMaxSpec();
	cout << xx->nume<<"\n\n";

	
	return 0;
}
