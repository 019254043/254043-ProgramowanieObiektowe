#include "funkcje2.h"

int Tablica::tablica_wartosc(int *wybor, int n, int m, int wartosc)
{
///////////////////////////////////////////////////////////////////////////////////////////////////
								// Wprowadzenie wartości do komórki przez użytkownika

	
	this->tab[n-1][m-1] = wartosc;	
	
	menu(wybor);	       
}
