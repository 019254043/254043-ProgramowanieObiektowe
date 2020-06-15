#include "funkcje2.h"

int Tablica_Tekst::nowa_tablica2(int *wybor, int n, int m)
{
	//1. Stworzenie nowej
	string **tab3;
	tab3 = new string *[n];     				

	for(int i=0; i<n; i++)
	{
		tab3[i] = new string [m];		
	}

	//2. Przepisanie komorek ze starej do nowej
	for(int i=0; (( i<n ) && ( i<wiersz )); i++)      
	{
		for(int j=0; (( j<m ) && ( j<kolumna )); j++)
		{
			tab3[i][j] = tab2[i][j];
		}	
	}

	//3. Usuwanie starej
	for (int i = 0; i<wiersz; i++)     			
	{
   		delete [] tab2[i];
	}
	delete [] tab2;

	//4. Przestawienie wskaznika
	tab2 = tab3;
	wiersz = n;
	kolumna = m;
	return 0;
}
