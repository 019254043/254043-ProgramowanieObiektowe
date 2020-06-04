#include "funkcje2.h"

float Tablica::operacje(int *wybor, int n, int m, float wynik)
{
	if(n > this->wiersz || m > this->kolumna)
	{
		system("clear");
		cout << "Taka komorka nie istnieje!\n" << endl;
		sleep(3);
		system("clear");
   		return ERR_INVALID_SIZE;
   	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if(*wybor==1)								//Suma wiersza
	{
		for(int i=0; i < (this->kolumna); i++)				
		{
			wynik += this->tab[n-1][i];
		}		
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	else if(*wybor==2)								//Suma kolumny
	{
		for(int i=0; i < (this->wiersz); i++)				
		{
			wynik += this->tab[i][m-1];
		}		
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	else if(*wybor==3)        							  // Największa wartość w konkretnym wierszu
	{	
		wynik = this->tab[n-1][0];
		for(int i=1; i < this->kolumna; i++)
		{	
			if(wynik < this->tab[n-1][i])
			{
				wynik = this->tab[n-1][i];
			}
		}	
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	else if(*wybor==4)          							 // Największa wartość w konkretnej kolumnie
	{
		wynik = this->tab[0][m-1];
		for(int i=1; i < this->wiersz; i++)
		{	
			if(wynik < this->tab[i][m-1])
			{
				wynik = this->tab[i][m-1];
			}
		}
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	else if(*wybor==5) 								// Najmniejsza wartość w konkretnym wierszu
	{
		wynik = this->tab[n-1][0];
		for(int i=1; i < this->kolumna; i++)
		{
			if(wynik > this->tab[n-1][i])
			{
				wynik = this->tab[n-1][i];
			}
		}	
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if(*wybor==6)								// Najmniejsza wartość w konkretnej kolumnie
	{
		wynik = this->tab[0][m-1];
		for(int i=1; i < this->wiersz; i++)
		{	
			if(wynik > this->tab[i][m-1])
			{
				wynik = this->tab[i][m-1];
			}
		}
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	else if(*wybor==7)          							 // Średnia wartość w konkretnym wierszu
	{	
		for(int i=0; i< this->kolumna; i++)
		{
			 wynik += this->tab[n-1][i];
		}
		wynik = wynik / this->kolumna;
	}	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	else if(*wybor==8)       					    		// Średnia wartość w konkretnej kolumnie
	{	
		for(int i=0; i< this->wiersz; i++)
		{
			 wynik += this->tab[i][m-1];
		}
		wynik = wynik / this->wiersz;
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	return wynik;
}

