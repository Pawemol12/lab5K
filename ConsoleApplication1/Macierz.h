#pragma once
#include "CompareTemplate.h"
template < int xnum, int ynum, class Element >

class Macierz
{
private:
	int sizeX, sizeY;
	Element tablica[xnum][ynum];
public:
	Macierz() {
		sizeX = xnum;
		sizeY = ynum;
	}

	void Dodaj(Element elem, int x, int y) {
		tablica[x][y] = elem;
	}
	Element& Pobierz(int x, int y) {
		return tablica[x][y];
	};
	void Wypisz() {
		using namespace std;
		cout << "Wypisywanie elementów macierzy" << endl;
		for (int i = 0; i < xnum; i++) {

			for (int j = 0; j < ynum; j++) {
				cout << tablica[i][j] << " ";
			}
			cout << endl;
		}

		cout << "Koniec" << endl;
	}

	bool Porownaj(Macierz& m) {
		if (this->sizeX == m.sizeX && this->sizeY == m.sizeY) {
			for (int i = 0; i < sizeX; i++) {
				for (int j = 0; j < sizeY; j++) {
					if (!porownaj(tablica[i][j], m.tablica[i][j])) {
						return false;
					}
				}
			}
		}

		return true;
	}


};

