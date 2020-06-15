#include "funkcje2.h"

int Tablica_Liczby::tablica_wartosc(int *wybor, int n, int m, int wartosc)
{
///////////////////////////////////////////////////////////////////////////////////////////////////
								// Wprowadzenie zwartości do komórki przez użytkownika
	if(n > wiersz || m > kolumna)
	{
   		return ERR_INVALID_SIZE;
   	}

	tab[n-1][m-1] = wartosc;	
	return 0;	       
}






