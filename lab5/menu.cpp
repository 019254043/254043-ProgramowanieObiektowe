 
#include "funkcje2.h"

int menu(Tablica *t_1, int *wybor, Komorka *k_1)
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
		cout << "7. Wyswietl zawartosc komorki" << endl;
		cout << "9. Zakoncz program\n" << endl;
		cout << "Wybor opcji: ";

		*wybor=0;
		cin >> *wybor;
		
		if(!cin)
		{
			cin.clear();   
    			cin.ignore(100, '\n');  		// Czyszczenie bufora
		}
		system("clear");
	}while(*wybor!=1 && *wybor!=2 && *wybor!=3 && *wybor!=4 && *wybor!=5 && *wybor!=6 && *wybor!=7 && *wybor!=9);      //Wymuszenie wyboru jednej z możliwych opcji	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	switch(*wybor)  				// Przejście do funkcji w zeleżności od wyboru opcji
	{
		case 1:							 // Wprowadzenie rozmiaru tablicy
			cout << "Podaj liczbe wierszy: ";		
			cin >> n;
			cout << "Podaj liczbe kolumn: ";
			cin >> m;
			system("clear");
			t_1->tablica(wybor,n,m,wartosc);			
		break;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////			
		case 2:									// Wybór komorki, do ktorej użytkownik chce wpisać wartość pod warunkiem, że wybrana komórka istnieje 			
			cout << "Podaj numer wiersza: ";
			cin >> n;
			cout << "Podaj numer kolumny: ";
			cin >> m;
			cout<<"Wprowadz liczbe calkowita do komorki o indeksie "<<n<<"x"<<m<<": ";    // Wprowadzenie wartości
			cin >> wartosc;
			system("clear");
			t_1->tablica_wartosc(wybor,n,m,wartosc);			
		break;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		
		case 3:
			t_1->tablica_wysw(wybor); 
		break;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		case 4:
		case 5:
			t_1->zapis_odczyt(wybor);
		break;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		case 6:
			t_1->menu_od_operacji(wybor, n, m, wynik);
		break;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		case 7:
			cout << "Podaj indeks wiersza: ";		
			cin >> n;
			cout << "Podaj indeks kolumny: ";
			cin >> m;
			wartosc = k_1->wypisz_komorke(t_1, n, m);
			system("clear");
			cout << "\nWartosc wynosi: "  <<  wartosc << "\n" << endl;
		break;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		case 9:
			exit(0);
		break;
	}
	menu(t_1, wybor, k_1);
}
