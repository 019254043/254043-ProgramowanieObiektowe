#include "funkcje2.h"

int tablica_wysw(struct Tablica *t, int *wybor)
{	
	for(int i=0; i < t->wiersz; i++)
	{
		cout<<endl;
		for(int j=0; j < t->kolumna; j++)
		{
			cout << t->tab[i][j] <<"  ";
		}
	}

	cout<<"\n"<<endl;
	cout<<"=================================================================\n"<<endl;	
	menu(t, wybor);
}
