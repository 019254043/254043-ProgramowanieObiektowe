#include "funkcje2.h"

void Tablica_Tekst::tablica_wysw2(int *wybor)
{	
	for(int i=0; i < wiersz; i++)
	{
		cout<<endl;
		for(int j=0; j < kolumna; j++)
		{
			cout << tab2[i][j] <<" , ";
		}
	}
	cout<<"\n=================================================================\n"<<endl;	
}
