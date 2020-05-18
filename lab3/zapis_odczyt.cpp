#include "funkcje2.h"

int zapis_odczyt(struct Tablica *t, int *wybor)
{
	if( *wybor==5 ) 							//ZAPIS
	{
		ofstream zapis;
		zapis.open("tablica_do_wgladu.txt");
		
		for(int i=0; i < t->wiersz; i++)
		{
			cout<<std::endl;
			for(int j=0; j < t->kolumna; j++)
			{
				zapis << t->tab[i][j] <<", ";
			}
			zapis << endl;
		}
	zapis.close();
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	else if(*wybor==4)							//ODCZYT
	{
		string linia;
		ifstream odczyt;

		odczyt.open("tablica_do_wgladu.txt");
		
		while(!odczyt.eof())
		{
			getline(odczyt,linia);
			cout<< linia << endl;
		}
		
	odczyt.close();
	}

	menu(t, wybor);
} 

