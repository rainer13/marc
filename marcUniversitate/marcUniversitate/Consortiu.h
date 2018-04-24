#ifndef CONSORTIU_H
#define CONSORTIU_H
#include"Universitate.h"

class Consortiu
{
public:
	Consortiu(char * n);
	char nume[20];
	Universitate* univ[10];
	int nru = 0;
	void addunv(Universitate *d);
	virtual ~Consortiu();

	friend ostream& operator<<(ostream &os, Consortiu &u) {
		os << "Numele consortiului este: " << u.nume << " si are urm universitati\n";
		for (int i = 1; i < u.nru; ++i) {
			os << (u.univ[i])->nume<<"\n";
		}
		os << "\n\n";
		return os;
	}

	Universitate* getUnivMaxSpec() {
		Universitate* u1 = univ[1];
		for (int i = 2; i <= nru; ++i) {
			if (univ[i]->getNrSpec() > u1->getNrSpec())
				u1 = univ[i];
		}
		return u1;
	}

protected:

private:
};

#endif // CONSORTIU_H
