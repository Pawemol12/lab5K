// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CompareTemplate.h"


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

    return 0;
}

