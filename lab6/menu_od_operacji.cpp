#include "funkcje2.h"

int Tablica_Liczby::menu_od_operacji(int *wybor, int n, int m, float wynik)
{		
	do
	{
		cout<< "1. Sumowanie konkretnego wiersza" << endl;
		cout<< "2. Sumowanie konkretnej kolumny" << endl;
		cout<< "3. Zanjdowwanie wartości największej w konkretnym wierszu" << endl;
		cout<< "4. Znajdowanie wartości największej w konkretnej kolumnie" << endl;
		cout<< "5. Zanjdowwanie wartości najmniejszej w konkretnym wierszu" << endl;
		cout<< "6. Zanjdowwanie wartości najmniejszej w konkrentej kolumnie" << endl;
		cout<< "7. Średnia arytmetyczna konkretnego wiersza" << endl;
		cout<< "8. Średnia arytmetyczna konkretnej kolumny\n" << endl;
		cout<< "Wybor opcji: ";
		
		*wybor=0;
		cin >> *wybor;
		if(!cin)
		{
			cin.clear();   
			cin.ignore(100, '\n');
		}
		system("clear");
	}while(*wybor!=1 && *wybor!=2 && *wybor!=3 && *wybor!=4 && *wybor!=5 && *wybor!=6 && *wybor!=7 && *wybor!=8); 
			
	if(*wybor==1 || *wybor==3 || *wybor==5 || *wybor==7)
	{							// Wybór komorki, do ktorej użytkownik chce wpisać wartość pod warunkiem, że wybrana komórka istnieje 			
			cout << "Podaj numer wiersza: ";
			cin >> n;
	}
	else if(*wybor==2 || *wybor==4 ||*wybor==6 || *wybor==8)
	{
			cout << "Podaj numer kolumny: ";
			cin >> m;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////
	
			float err = -1;
			wynik = operacje(wybor, n, m, wynik);
			if(err == -1)
			{
				system("clear");
				cout << "Taki wiersz/komorka nie istnieje!\n" << endl;
				sleep(3);
				system("clear");
				return -1;
			}
			else	wynik = err;

			switch(*wybor)
			{
				case 1:	
					cout << "\nSuma wszystkich elementów wiersza o numerze " << n << ", wynosi: " << wynik << "\n" << endl;	
				break;
				case 2:
					cout << "\nSuma wszystkich elementów w kolumnie o numerze " << m << ", wynosi: " << wynik << "\n" << endl;	
				break;
				case 3:
				case 4:
					cout << "\nNajwieksza wartosc: " << wynik << "\n" << endl;
				break;
				case 5:
				case 6:
					cout<< "\nNajmniejsza wartosc: " << wynik << "\n" << endl;
				break;
				case 7:
				case 8:
					cout<< "\nWartosc srednia wynosi: " << wynik << "\n" << endl;
				break;
			}
			cout<<"\n=================================================================\n"<<endl;
}	
