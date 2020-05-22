#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

/*
 * @param[in,out] t_1 - obiekt
 * @param[in,out] tab - tablica dwuwymiarowa
 * @param[in] wiersz - definiuje rozmiar tablicy   
 * @param[in] kolumna -definiuje rozmiar tablicy
 * @param[in] wartosc - przechowuje wartość wpisywana do konkretnej komórki w tablicy
 * @param[in] wybor - przechowuje numer wybranej opcji przez użytkownika
 * @param[in] n - numer wiersza do którego użytkownik chce się odwołać
 * @param[in] m - numer kolumny numer wiersza do którego użytkownik chce się odwołać
 * @param[out] wynik - zwaraca wartość w zależności od operacji, którą wybrał użytkownik
 * @return - kod błędu lub 0 w przypadku powodzenia
*/

class Tablica
{
	private:
	int **tab;
	int wiersz;
	int kolumna;	

	public:
	int tablica(int *wybor, int n, int m, int wartosc);
	int tablica_wartosc(int *wybor, int n, int m, int wartosc);
	int menu(int *wybor);
	int menu_od_operacji(int *wybor, int n, int m, float wynik);
	int tablica_wysw(int *wybor);
	int zapis_odczyt(int *wybor);
	float operacje(int *wybor, int n, int m, float wynik);
};


