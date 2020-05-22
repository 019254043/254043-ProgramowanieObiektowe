#include "funkcje2.h"

int Tablica::tablica(int *wybor, int n, int m, int wartosc)
{		
///////////////////////////////////////////////////////////////////////////////////////////////////
										//Tworzenie klona, który przechowa wartości komórek starej tablicy
		if(n != this->wiersz && m != this->kolumna)     			
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
					clone[i][j] = this->tab[i][j];   
				}	
			}
///////////////////////////////////////////////////////////////////////////////////////////////////
										//Usuwanie starej tablicy
			for (int i = 0; i < n; i++)     			
			{
   				delete [] this->tab[i];
			}
			delete [] this->tab;
///////////////////////////////////////////////////////////////////////////////////////////////////
										// Stworzenie nowej tablicy
			this->tab = new int *[(this->wiersz)];     		 
			for(int i=0; i < (this->wiersz); i++)
			{
				this->tab[i] = new int [(this->kolumna)];		
			}
///////////////////////////////////////////////////////////////////////////////////////////////////
										 // Dla nowo powstałej tablicy - wpisanie do każdej komorki 0 (bez tego w niektórych komórkach pojawiały się losowe wartości)
			for(int i=0; i < this->wiersz; i++)			
			{
				for(int j=0; j < this->kolumna; j++)
				{
					this->tab[i][j] = 0;   
				}	
			}
///////////////////////////////////////////////////////////////////////////////////////////////////
			
			for(int i=0; ((i<n) && (i < this->wiersz)); i++)          //Przepisanie komórek z klona do nowej
			{
				for(int j=0; ((j<m) && (j < this->kolumna)); j++)
				{
					this->tab[i][j] = clone[i][j];
				}	
			}
///////////////////////////////////////////////////////////////////////////////////////////////////	
										//Usuwanie klona
			for (int i = 0; i < n; i++)    				 
			{
   				delete [] clone[i];
			}
			delete [] clone;
///////////////////////////////////////////////////////////////////////////////////////////////////	
			menu(wybor);          				 	//Powrót do menu
		}
///////////////////////////////////////////////////////////////////////////////////////////////////
										  // Stworzenie tablicy po raz pierwszy
		this->tab = new int *[(this->wiersz)];     				

		for(int i=0; i< (this->wiersz); i++)
		{
			this->tab[i] = new int [(this->kolumna)];		
		}
	menu(wybor);   
}




