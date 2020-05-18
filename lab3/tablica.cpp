#include "funkcje2.h"

int tablica(struct Tablica *t, int *wybor, int n, int m, int wartosc)
{		
///////////////////////////////////////////////////////////////////////////////////////////////////
	if(*wybor==1)
	{	
///////////////////////////////////////////////////////////////////////////////////////////////////	
		if(n != t->wiersz && m != t->kolumna)     			//Tworzenie klona, który przechowa wartości komórek starej tablicy
		{
			int **clone = new int *[n];  
   
			for(int i=0; i<n; i++)
			{
				clone[i] = new int [m];		
			}
///////////////////////////////////////////////////////////////////////////////////////////////////	
										//Kopia komórek do klona
			for(int i=0; i<n; i++)						
			{
				for(int j=0; j<m; j++)
				{
					clone[i][j] = t->tab[i][j];   
				}	
			}
///////////////////////////////////////////////////////////////////////////////////////////////////
			for (int i = 0; i < n; i++)     			//Usuwanie starej tablicy
			{
   				delete [] t->tab[i];
			}
			delete [] t->tab;
///////////////////////////////////////////////////////////////////////////////////////////////////
			t->tab = new int *[(t->wiersz)];     			  // Stworzenie nowej tablicy

			for(int i=0; i < (t->wiersz); i++)
			{
				t->tab[i] = new int [(t->kolumna)];		
			}
///////////////////////////////////////////////////////////////////////////////////////////////////
			for(int i=0; i < t->wiersz; i++)		 // Dla nowo powstałej tablicy - wpisanie do każdej komorki 0 (bez tego w niektórych komórkach pojawiały się losowe wartości)
			{
				for(int j=0; j < t->kolumna; j++)
				{
					t->tab[i][j] = 0;   
				}	
			}
///////////////////////////////////////////////////////////////////////////////////////////////////
			for(int i=0; ((i<n) && (i < t->wiersz)); i++)          //Przepisanie komórek z klona do nowej
			{
				for(int j=0; ((j<m) && (j < t->kolumna)); j++)
				{
					t->tab[i][j] = clone[i][j];
				}	
			}
///////////////////////////////////////////////////////////////////////////////////////////////////	
			for (int i = 0; i < n; i++)    				 //Usuwanie klona
			{
   				delete [] clone[i];
			}
			delete [] clone;
///////////////////////////////////////////////////////////////////////////////////////////////////	
			menu(t, wybor);          				 //Powrót do menu
		}
///////////////////////////////////////////////////////////////////////////////////////////////////
										  // Stworzenie tablicy po raz pierwszy
		t->tab = new int *[(t->wiersz)];     				

		for(int i=0; i< (t->wiersz); i++)
		{
			t->tab[i] = new int [(t->kolumna)];		
		}
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
										// Wprowadzenie wartości do komórki przez użytkownika
	else if(*wybor==2)				
	{	
		t->tab[n-1][m-1] = wartosc;	
	}
	menu(t, wybor);	          							
}




