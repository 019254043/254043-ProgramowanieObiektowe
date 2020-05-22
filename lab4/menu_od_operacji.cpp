#include "funkcje2.h"

int Tablica::menu_od_operacji(int *wybor, int n, int m, float wynik)
{		
	if(this->wiersz==0 || this->kolumna==0)
	{
		cout << "Tablica nie zostala stworzona!" << endl;         // Sprawdzenie czy tablica uprzednio została stworzona
		sleep(3);
		system("clear");
		menu(wybor);    // Jeśli nie - powrót do MENU
	}

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
		cout << "Wybor opcji: ";

	}while(*wybor!=1 && *wybor!=2 && *wybor!=3 && *wybor!=4 && *wybor!=5 && *wybor!=6); 

	*wybor=0;
	cin >> *wybor;

	if(!cin)
	{
		cin.clear();   
		cin.ignore(100, '\n');
	}
	system("clear");
			
	if(*wybor==1 || *wybor==3 ||*wybor==5 || *wybor==7)
	{
		do
		{							// Wybór komorki, do ktorej użytkownik chce wpisać wartość pod warunkiem, że wybrana komórka istnieje 			
			system("clear");
			cout << "Podaj numer wiersza: ";
			cin >> n;
			if(!cin)
			{
				cin.clear();   
	    			cin.ignore(100, '\n');
			}
		}while( (this->wiersz <= (n-1)) || (n < 1) );	
	}

	else if(*wybor==2 || *wybor==4 ||*wybor==6 || *wybor==8)
	{
		do
		{		
			m=0;
			system("clear");
			cout << "Podaj numer kolumny: ";
			cin >> m;
			if(!cin)
			{
				cin.clear();   
				   cin.ignore(100, '\n');
			}
		}while( (this->kolumna <= (m-1)) || (m < 1) ); 
	}
			
			wynik = operacje(wybor, n, m, wynik);

			switch(*wybor)
			{
				case 1:	
					cout << "\nSuma wszystkich elementów wiersza o numerze " << m << ", wynosi: " << wynik << "\n" << endl;	
				break;
				case 2:
					cout << "\nSuma wszystkich elementów w kolumnie o numerze " << m << ", wynosi: " << wynik << "\n" << endl;	
				break;
				case 3:
				case 4:
					cout << "\nNajwieksza wartosc to: " << wynik << "\n" << endl;
				break;
				case 5:
				case 6:
					cout<< "\nNajmniejsza wartosc to: " << wynik << "\n" << endl;
				break;
				case 7:
				case 8:
					cout<< "\nWartosc srednia wynosi: " << wynik << "\n" << endl;
				break;
			}
			cout<<"\n=================================================================\n"<<endl;
}	
