 
#include "funkcje2.h"

int menu(Tablica_Liczby *t_1, Tablica_Tekst *t_2, Tablica *t, int *wybor)
{
	int n=0, m=0;
	int liczba;
	string tekst;
	int wartosc;
	int err=-1;
	float wynik=0;
	do
	{	
		cout << "1. Nadaj rozmiar tablicy" << endl;
		cout << "2. Aktualizuj zawartosc tablicy" << endl;
		cout << "3. Wyswietl zawartosc tablicy" << endl;
		cout << "4. Odczyt z pliku" << endl;
		cout << "5. Zapis do pliku" << endl;
		if(t == t_1)
		{
			cout << "6. Operacje" << endl;
		}
		cout << "7. Zmien typ arkusza\n" << endl;
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

			if(t_1 == t)
			{
				err = t->tablica(wybor,n,m);
			}
			else if(t_2 == t)
			{
				err = t->tablica2(wybor,n,m);
				
			}
			if(err == -1)
			{
				system("clear");
				cout << "Nie mozna stworzyc takiej tablicy!\n" << endl;
				sleep(3);
				system("clear");
			}			
		break;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////			
		case 2:									// Wybór komorki, do ktorej użytkownik chce dodać zawartość 			
			cout << "Podaj numer wiersza: ";
			cin >> n;
			cout << "Podaj numer kolumny: ";
			cin >> m;
			cout<<"Wprowadz zawartosc do komorki o indeksie "<<n<<"x"<<m<<": ";   
			if(t_1 == t)
			{	
				cin >> wartosc;
				err = t->tablica_wartosc(wybor,n,m,wartosc);
				
			}
			else if(t_2 == t)
			{
				cin >> tekst;
				err = t->tablica_wartosc2(wybor,n,m,tekst);	
			}
			if(err == -1)
			{
				system("clear");
				cout << "Taka komorka nie istnieje!\n" << endl;
				sleep(3);
				system("clear");
			}
			system("clear");			
		break;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		
		case 3:
			if(t_1 == t)
			{
				t->tablica_wysw(wybor); 
			}
			else if(t_2 == t)
			{
				t->tablica_wysw2(wybor); 
			}
			
		break;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		case 4:
		case 5:
			if(t_1 == t)
			{
				t->zapis_odczyt(wybor);
			}
			else if(t_2 == t)
			{
				t->zapis_odczyt2(wybor);
			}
		break;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		case 6:
			if(t_1 == t)
			{
				t->menu_od_operacji(wybor, n, m, wynik);
			}
		break;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		case 7:
			typ_tablicy(t_1, t_2, t, wybor);
		case 9:
			exit(0);
		break;
	}
	menu(t_1, t_2, t, wybor);

}
