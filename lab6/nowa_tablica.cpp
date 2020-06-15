#include "funkcje2.h"

int Tablica_Liczby::nowa_tablica(int *wybor, int n, int m)
{
	//1. Stworzenie nowej
	int **tab3;
	tab3 = new int *[n];     				

	for(int i=0; i<n; i++)
	{
		tab3[i] = new int [m];		
	}

	//2. Przepisanie komorek ze starej do nowej
	for(int i=0; i < n; i++)			
	{
		for(int j=0; j < m; j++)
		{
			tab3[i][j] = 0;   
		}	
	}

	for(int i=0; (( i<n ) && ( i<wiersz )); i++)      
	{
		for(int j=0; (( j<m ) && ( j<kolumna )); j++)
		{
			tab3[i][j] = tab[i][j];
		}	
	}

	//3. Usuwanie starej
	for (int i = 0; i<wiersz; i++)     			
	{
   		delete [] tab[i];
	}
	delete [] tab;

	//4. Przestawienie wskaznika
	tab = tab3;
	wiersz = n;
	kolumna = m;
	return 0;
}


