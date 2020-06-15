#include "funkcje2.h"

void Tablica_Liczby::tablica_wysw(int *wybor)
{	
	for(int i=0; i < wiersz; i++)
	{
		cout<<endl;
		for(int j=0; j < kolumna; j++)
		{
			cout << tab[i][j] <<" , ";
		}
	}
	cout<<"\n=================================================================\n"<<endl;	
}


