#include "funkcje2.h"

int Tablica::tablica_wysw(int *wybor)
{	
	for(int i=0; i < this->wiersz; i++)
	{
		cout<<endl;
		for(int j=0; j < this->kolumna; j++)
		{
			cout << this->tab[i][j] <<"  ";
		}
	}

	cout<<"\n=================================================================\n"<<endl;	
	menu(wybor);
}
