#include "funkcje2.h"

int Tablica::tablica_wartosc(int *wybor, int n, int m, int wartosc)
{
///////////////////////////////////////////////////////////////////////////////////////////////////
								// Wprowadzenie wartości do komórki przez użytkownika

	if(n > this->wiersz || m > this->kolumna)
	{
		system("clear");
		cout << "Taka komorka nie istnieje!\n" << endl;
		sleep(3);
		system("clear");
   		return ERR_INVALID_SIZE;
   	}

	this->tab[n-1][m-1] = wartosc;		       
}
