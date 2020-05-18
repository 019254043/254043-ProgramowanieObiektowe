#include "funkcje2.h"

float operacje(struct Tablica *t, int *wybor, int n, int m, float wynik)
{
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if(*wybor==1)
	{
		for(int i=0; i < (t->kolumna); i++)				//Suma wiersza
		{
			wynik += t->tab[n-1][i];
		}		
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if(*wybor==2)
	{
		for(int i=0; i < (t->wiersz); i++)				//Suma kolumny
		{
			wynik += t->tab[i][m-1];
		}		
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if(*wybor==3)        					  // Największa wartość w konkretnym wierszu
	{	
		wynik = t->tab[n-1][0];
		for(int i=1; i < t->kolumna; i++)
		{	
			if(wynik < t->tab[n-1][i])
			{
				wynik = t->tab[n-1][i];
			}
		}	
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if(*wybor==4)          					 // Największa wartość w konkretnej kolumnie
	{
		wynik = t->tab[0][m-1];
		for(int i=1; i < t->wiersz; i++)
		{	
			if(wynik < t->tab[i][m-1])
			{
				wynik = t->tab[i][m-1];
			}
		}
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if(*wybor==5) 						// Najmniejsza wartość w konkretnym wierszu
	{
		wynik = t->tab[n-1][0];
		for(int i=1; i < t->kolumna; i++)
		{
			if(wynik > t->tab[n-1][i])
			{
				wynik = t->tab[n-1][i];
			}
		}	
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if(*wybor==6)						// Najmniejsza wartość w konkretnej kolumnie
	{
		wynik = t->tab[0][m-1];
		for(int i=1; i < t->wiersz; i++)
		{	
			if(wynik > t->tab[i][m-1])
			{
				wynik = t->tab[i][m-1];
			}
		}
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if(*wybor==7)          					 // Średnia wartość w konkretnym wierszu
	{	
		for(int i=0; i< t->kolumna; i++)
		{
			 wynik += t->tab[n-1][i];
		}
		wynik = wynik / t->kolumna;
	}	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if(*wybor==8)       					    // Średnia wartość w konkretnej kolumnie
	{	
		for(int i=0; i< t->wiersz; i++)
		{
			 wynik += t->tab[i][m-1];
		}
		wynik = wynik / t->wiersz;
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	return wynik;
}

