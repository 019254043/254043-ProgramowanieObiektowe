#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <fstream>
#include <string>

#define ERR_INVALID_SIZE -1; //kod błędu

using namespace std;

/*
 * @param[in,out] t - wskaźnik na obiekty dziedziczone
*/
class Tablica
{
	protected:
	int **tab;
	string **tab2;
	int wiersz;
	int kolumna;

	public:

/*
 * @param[in] wiersz - definiuje rozmiar tablicy   
 * @param[in] kolumna -definiuje rozmiar tablicy
 * @param[in] wartosc - przechowuje wartość wpisywana do konkretnej komórki w tablicy
 * @param[in] wybor - przechowuje numer wybranej opcji przez użytkownika
 * @param[in] n - numer wiersza do którego użytkownik chce się odwołać
 * @param[in] m - numer kolumny numer wiersza do którego użytkownik chce się odwołać
 * @return - kod błędu -1 lub 0 w przypadku powodzenia
*/
	virtual int tablica(int *wybor, int n, int m)=0;
	virtual int tablica2(int *wybor, int n, int m)=0;
	virtual int nowa_tablica(int *wybor, int n, int m)=0;
	virtual int nowa_tablica2(int *wybor, int n, int m)=0;
	virtual int tablica_wartosc(int *wybor, int n, int m, int wartosc)=0;
	virtual int tablica_wartosc2(int *wybor, int n, int m, string tekst)=0;
	virtual void tablica_wysw(int *wybor)=0;
	virtual void tablica_wysw2(int *wybor)=0;
	virtual int zapis_odczyt(int *wybor)=0;
	virtual int zapis_odczyt2(int *wybor)=0;

/*
 * @param[out] wynik - zwaraca wartość w zależności od operacji, którą wybrał użytkownik
*/
	virtual int menu_od_operacji(int *wybor, int n, int m, float wynik)=0;
	virtual float operacje(int *wybor, int n, int m, float wynik)=0;
};

/*
 * @param[in,out] t_1 - tablica typu int
*/
class Tablica_Liczby :public Tablica   // Arkusz liczbowy
{	
	private:
	int **tab;
	int wiersz=0;
	int kolumna=0;

	public:
	int tablica(int *wybor, int n, int m);	
	int nowa_tablica(int *wybor, int n, int m);
	int tablica_wartosc(int *wybor, int n, int m, int wartosc);
	void tablica_wysw(int *wybor);
	int zapis_odczyt(int *wybor);
	int menu_od_operacji(int *wybor, int n, int m, float wynik);
	float operacje(int *wybor, int n, int m, float wynik);
	int tablica2(int *wybor, int n, int m){}
	int nowa_tablica2(int *wybor, int n, int m){}
	int tablica_wartosc2(int *wybor, int n, int m, string tekst){}
	void tablica_wysw2(int *wybor){}
	int zapis_odczyt2(int *wybor){}
	
};
/*
 * @param[in,out] t_2 - tablica typu string
*/
class Tablica_Tekst :public Tablica    // Arkusz tekstowy
{	
	private:
	string **tab2;
	int wiersz=0;
	int kolumna=0;

	public:
	int tablica2(int *wybor, int n, int m);
	int nowa_tablica2(int *wybor, int n, int m);	
	int tablica_wartosc2(int *wybor, int n, int m, string tekst);
	void tablica_wysw2(int *wybor);
	int zapis_odczyt2(int *wybor);
	int tablica(int *wybor, int n, int m){}
	int nowa_tablica(int *wybor, int n, int m){}
	int tablica_wartosc(int *wybor, int n, int m, int wartosc){}
	void tablica_wysw(int *wybor){}
	int zapis_odczyt(int *wybor){}
	int menu_od_operacji(int *wybor, int n, int m, float wynik){}
	float operacje(int *wybor, int n, int m, float wynik){}
	
};

int typ_tablicy(Tablica_Liczby *t_1, Tablica_Tekst *t_2, Tablica *t, int *wybor);
int menu(Tablica_Liczby *t_1, Tablica_Tekst *t_2, Tablica *t, int *wybor);
