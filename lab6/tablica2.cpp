#include "funkcje2.h"

int Tablica_Tekst::tablica2(int *wybor, int n, int m)
{		
		if(n==0 || m==0)
		{	
   			return ERR_INVALID_SIZE;
   		}
///////////////////////////////////////////////////////////////////////////////////////////////////

		if(wiersz !=0 && kolumna !=0 && n!=0 && m!=0)     		 // Stworzenie nowej tablicy
		{
	       		nowa_tablica2(wybor, n, m);			 	
		}
///////////////////////////////////////////////////////////////////////////////////////////////////
		else
		{
			wiersz = n;
			kolumna = m;						  // Stworzenie tablicy po raz pierwszy
			tab2 = new string *[n];     				

			for(int i=0; i<n; i++)
			{
				tab2[i] = new string [m];		
			}	
		}
	return 0;
}
