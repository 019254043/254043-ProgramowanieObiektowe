#include "funkcje2.h"

int Tablica_Tekst::tablica_wartosc2(int *wybor, int n, int m, string tekst)
{
///////////////////////////////////////////////////////////////////////////////////////////////////
								// Wprowadzenie zwartości do komórki przez użytkownika
	if(n > wiersz || m > kolumna)
	{
   		return ERR_INVALID_SIZE;
   	}

	tab2[n-1][m-1] = tekst;	
	return 0;	       
}
