#include "funkcje2.h"

int menu(struct Tablica *t, int *wybor)
{
	int n=0, m=0, wartosc;
	int min, max, suma, srednia;
	float wynik=0;
	do
	{	
		cout << "1. Nadaj rozmiar tablicy" << endl;
		cout << "2. Aktualizuj zawartosc tablicy" << endl;
		cout << "3. Wyswietl zawartosc tablicy" << endl;
		cout << "4. Odczyt z pliku" << endl;
		cout << "5. Zapis do pliku" << endl;
		cout << "6. Operacje" << endl;
		cout << "9. Zakoncz program\n" << endl;
		cout << "Wybor opcji: ";

		*wybor=0;
		cin >> *wybor;

		if(!cin)
		{
			cin.clear();   
    			cin.ignore(100, '\n');
		}
		system("clear");
	}while(*wybor!=1 && *wybor!=2 && *wybor!=3 && *wybor!=4 && *wybor!=5 && *wybor!=6 && *wybor!=9);      //Wymuszenie wyboru jednej z możliwych opcji	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	switch(*wybor)  // Przejście do funkcji w zeleżności od wyboru opcji
	{
		case 1:
			if(t->wiersz != 0 || t->kolumna != 0)
			{
				n = t->wiersz;
				m = t->kolumna;
			}

			do								 // Wprowadzenie rozmiaru tablicy
			{								 // Możliwość wpisania tylko liczb naturalnych
				t->wiersz = 0;
				cout << "Podaj liczbe wierszy: ";		
				cin >> t->wiersz;
				if(!cin)
				{
			
					cin.clear();   
	    				cin.ignore(100, '\n');
				}

			}while(t->wiersz <= 0);
					
			do
			{	
				t->kolumna=0;
				cout << "Podaj liczbe kolumn: ";
				cin >> t->kolumna;

				if(!cin)
				{
					cin.clear();   
		    			cin.ignore(100, '\n');
				}

			system("clear");
			}while(t->kolumna <= 0);
			system("clear");	
			tablica(t, wybor,n,m,wartosc);			
		break;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////			
		case 2:
			if(t->wiersz==0 || t->kolumna==0)
			{

				cout << "Tablica nie zostala stworzona!" << endl;       // Sprawdzenie czy tablica uprzednio została stworzona
				sleep(3);
				system("clear");
			
				menu(t, wybor);    					// Jeśli nie - powrót do MENU
			}		
			do
			{							// Wybór komorki, do ktorej użytkownik chce wpisać wartość pod warunkiem, że wybrana komórka istnieje 			
				n=0;
				system("clear");
				cout << "Podaj numer wiersza: ";
				cin >> n;
				if(!cin)
				{
					cin.clear();   
	    				cin.ignore(100, '\n');
				}
		
			}while( (t->wiersz <= (n-1)) || (n < 1) ); 

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
			}while( (t->kolumna <= (m-1)) || (m < 1) ); 

			system("clear");
			cout<<"Wprowadz liczbe calkowita do komorki o indeksie "<<n<<"x"<<m<<": ";    // Wprowadzenie wartości
			cin >> wartosc;
			cout<<endl;
			tablica(t, wybor,n,m,wartosc);			
		break;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		
		case 3:
			if(t->wiersz==0 || t->kolumna==0)
			{
				cout << "Tablica nie zostala stworzona!" << endl;         // Sprawdzenie czy tablica uprzednio została stworzona
				sleep(3);
				system("clear");
				menu(t, wybor);    // Jeśli nie - powrót do MENU
			}
			tablica_wysw(t, wybor); 
		break;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		case 4:
		case 5:
			zapis_odczyt(t, wybor); 
		break;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		case 6:
			menu_od_operacji(t, wybor, n, m, wynik);
		break;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		case 9:
			exit(0);
		break;
	}
	menu(t, wybor);
}


