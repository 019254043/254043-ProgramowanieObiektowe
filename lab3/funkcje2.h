#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

/*
 * @param[in,out] tab - tablica dwuwymiarowa
 * @param[in] t->wiersz - definiuje rozmiar tablicy   
 * @param[in] t->kolumna -definiuje rozmiar tablicy
 * @param[in] wartosc - przechowuje wartość wpisywana do konkretnej komórki w tablicy
 * @param[in] wybor - przechowuje numer wybranej opcji przez użytkownika
 * @param[in] n - numer wiersza
 * @param[in] m - numer kolumny
 * @param[out] wynik - zwaraca wartość w zależności od operacji, którą wybrał użytkownik
 * @return - kod błędu lub 0 w przypadku powodzenia
*/

struct Tablica
{
	int **tab;
	int wiersz;
	int kolumna;	
};

int menu(struct Tablica *t, int *wybor);
int menu_od_operacji(struct Tablica *t, int *wybor, int n, int m, float wynik);
int tablica(struct Tablica *t, int *wybor, int n, int m, int wartosc);
int tablica_wysw(struct Tablica *t, int *wybor);
int zapis_odczyt(struct Tablica *t, int *wybor);
float operacje(struct Tablica *t, int *wybor, int n, int m, float wynik);

