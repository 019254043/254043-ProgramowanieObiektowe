#include "funkcje2.h"

int Tablica_Liczby::tablica(int *wybor, int n, int m)
{		
		if(n==0 || m==0)
		{	
   			return ERR_INVALID_SIZE;
   		}
///////////////////////////////////////////////////////////////////////////////////////////////////

		if(wiersz !=0 && kolumna !=0 && n!=0 && m!=0)     		 // Stworzenie nowej tablicy
		{
	       		nowa_tablica(wybor, n, m);			 	
		}
///////////////////////////////////////////////////////////////////////////////////////////////////
		else
		{
			wiersz = n;
			kolumna = m;						  // Stworzenie tablicy po raz pierwszy
			tab = new int *[n];     				

			for(int i=0; i<n; i++)
			{
				tab[i] = new int [m];		
			}	
		}
	return 0;
}




