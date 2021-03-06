// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CompareTemplate.h"
#include "Macierz.h"
#include "ImaginaryNumber.h"

using namespace std;

int main()
{
	int i = 1;
	int i2 = 2;

	if (porownaj(i, i2)) {
		cout << "Liczby są takie same" << endl;
	}
	else {
		cout << "Liczby nie są takie same!" << endl;
	}

	Macierz < 2, 2, int > macierz_calkowita;
	macierz_calkowita.Dodaj(15, 0, 0);
	macierz_calkowita.Dodaj(20, 0, 1);
	macierz_calkowita.Dodaj(30, 1, 0);
	macierz_calkowita.Dodaj(40, 1, 1);
	cout << "Macierz Całkowita" << endl;
	macierz_calkowita.Wypisz();

	Macierz < 2, 2, double > macierz_zmiennoprzecinkowa;
	macierz_zmiennoprzecinkowa.Dodaj(15.5, 0, 0);
	macierz_zmiennoprzecinkowa.Dodaj(20.5, 0, 1);
	macierz_zmiennoprzecinkowa.Dodaj(30.3, 1, 0);
	macierz_zmiennoprzecinkowa.Dodaj(40.4, 1, 1);
	cout << "Macierz Zmiennoprzecikowa" << endl;
	macierz_zmiennoprzecinkowa.Wypisz();

	Macierz < 2, 2, ImaginaryNumber > macierz_urojona;
	macierz_urojona.Dodaj(ImaginaryNumber(1, 2), 0, 0);
	macierz_urojona.Dodaj(ImaginaryNumber(2, 3), 0, 1);
	macierz_urojona.Dodaj(ImaginaryNumber(3, 4), 1, 0);
	macierz_urojona.Dodaj(ImaginaryNumber(5, 6), 1, 1);
	cout << "Macierz Urojona" << endl;
	macierz_urojona.Wypisz();

	//Porównywanie 2 macierzy urojonych
	Macierz < 2, 2, ImaginaryNumber > macierz_urojona2;
	macierz_urojona2.Dodaj(ImaginaryNumber(1, 23), 0, 0);
	macierz_urojona2.Dodaj(ImaginaryNumber(2, 3), 0, 1);
	macierz_urojona2.Dodaj(ImaginaryNumber(3, 4), 1, 0);
	macierz_urojona2.Dodaj(ImaginaryNumber(5, 6), 1, 1);

	if (macierz_urojona.Porownaj(macierz_urojona2)) {
		cout << "Obie macierze urojone są takie same" << endl;
	}
	else {
		cout << "Macierze urojone nie są takie same" << endl;
	}

	system("pause");
    return 0;
}

