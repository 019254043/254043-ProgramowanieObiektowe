#include "funkcje2.h"

int Tablica::tablica(int *wybor, int n, int m, int wartosc)
{		
		if(n==0 || m==0)
		{	
			system("clear");
			cout << "Nie mozna stworzyc takiej tablicy!\n" << endl;
			sleep(3);
			system("clear");
   			return ERR_INVALID_SIZE;
   		}
///////////////////////////////////////////////////////////////////////////////////////////////////
								//Tworzenie klona, który przechowa wartości komórek starej tablicy
		if(this->wiersz !=0 && this->kolumna !=0 && n!=0 && m!=0)     			
		{
			int **clone = new int *[this->wiersz];  

			for(int i=0; i < this->wiersz; i++)
			{
				clone[i] = new int [this->kolumna];		
			}
///////////////////////////////////////////////////////////////////////////////////////////////////	
										//Kopia komórek do klona
			for(int i=0; i < this->wiersz; i++)						
			{
				for(int j=0; j < this->kolumna; j++)
				{
					clone[i][j] = this->tab[i][j];   
				}	
			}
///////////////////////////////////////////////////////////////////////////////////////////////////
										//Usuwanie starej tablicy
			for (int i = 0; i < this->wiersz; i++)     			
			{
   				delete [] this->tab[i];
			}
			delete [] this->tab;
///////////////////////////////////////////////////////////////////////////////////////////////////
										// Stworzenie nowej tablicy
			this->tab = new int *[n];     		 
			for(int i=0; i < n; i++)
			{
				this->tab[i] = new int [m];		
			}
///////////////////////////////////////////////////////////////////////////////////////////////////
										 // Dla nowo powstałej tablicy - wpisanie do każdej komorki 0 (bez tego w niektórych komórkach pojawiały się losowe wartości)
			for(int i=0; i < n; i++)			
			{
				for(int j=0; j < m; j++)
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
			for (int i = 0; i < this->wiersz; i++)    				 
			{
   				delete [] clone[i];
			}
			delete [] clone;
///////////////////////////////////////////////////////////////////////////////////////////////////	
			this->wiersz = n;
			this->kolumna = m;
			return 0;        				 	//Powrót do menu
		}
///////////////////////////////////////////////////////////////////////////////////////////////////

		this->wiersz = n;
		this->kolumna = m;						  // Stworzenie tablicy po raz pierwszy
		this->tab = new int *[n];     				

		for(int i=0; i<n; i++)
		{
			this->tab[i] = new int [m];		
		}	
	return 0;
}




