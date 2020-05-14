#include "funkcje2.h"

int menu(struct Tablica *t, int *wybor)
{
	do
	{	
		cout << "1. Nadaj rozmiar tablicy" << endl;
		cout << "2. Aktualizuj zawartosc tablicy" << endl;
		cout << "3. Wyswietl zawartosc tablicy" << endl;
		cout << "4. Odczyt z pliku" << endl;
		cout << "5. Zapis do pliku" << endl;
		cout << "6. Sumowanie kolumn i wierszy" << endl;
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
	
	switch(*wybor)  // Przejście do funkcji w zeleżności od wyboru opcji
	{
		case 1:
		case 2:
		tablica(t, wybor);
		break;

		case 3:
		tablica_wysw(t, wybor);
		break;

		case 4:
		case 5:
		zapis_odczyt(t, wybor);
		break;
		
		case 6:
		operacje(t,wybor);
		break;
		
		case 9:
		break;
	}
}

