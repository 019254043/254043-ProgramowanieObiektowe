#include "funkcje2.h"

int Komorka::wypisz_komorke(Tablica *t_1, int n, int m)
{
	if(n > t_1->wiersz || m > t_1->kolumna)
	{
		system("clear");
		cout << "Taka komorka nie istnieje!\n" << endl;
		sleep(3);
		system("clear");
   		return ERR_INVALID_SIZE;
   	}
	
	else
		return t_1->tab[n-1][m-1];

}
