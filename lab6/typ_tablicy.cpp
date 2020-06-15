#include "funkcje2.h"

int typ_tablicy(Tablica_Liczby *t_1, Tablica_Tekst *t_2, Tablica *t, int *wybor)
{
	do
	{
		cout<< "1. Liczby" << endl;
		cout<< "2. Tekst" << endl;
	
		*wybor=0;
		cin >> *wybor;
		
		if(!cin)
		{
			cin.clear();   
    			cin.ignore(100, '\n');  		
		}
		system("clear");
	}while(*wybor!=1 && *wybor!=2); 

	if(*wybor == 1)
	{
		t = t_1;
	}
	else if(*wybor == 2)
	{
		t = t_2;
	}
	
	menu(t_1, t_2, t, wybor);
}
