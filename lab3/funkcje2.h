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
 * @param[in] min - przechowuje minimalną wartość wiersza/kolumny
 * @param[in] max - przechowuje maksymalną wartość wiersza/kolumny
 * @param[in] suma - przechowuje sumę wszystkich komórek dla konktrenego wiersza/kolumny
 * @param[in] m - numer wiersza
 * @param[in] n - numer kolumny
 * @return - kod błędu lub 0 w przypadku powodzenia
*/

struct Tablica
{
	int **tab;
	int wiersz;
	int kolumna;	
};

int menu(struct Tablica *t, int *wybor);
int tablica(struct Tablica *t, int *wybor);
int tablica_wysw(struct Tablica *t, int *wybor);
int zapis_odczyt(struct Tablica *t, int *wybor);
int operacje(struct Tablica *t, int *wybor);
