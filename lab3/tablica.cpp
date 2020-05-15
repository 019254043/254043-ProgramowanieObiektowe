#include "funkcje2.h"

int tablica(struct Tablica *t, int *wybor)
{										// Wprowadzenie rozmiaru tablicy
	if(*wybor==1)
	{
				
		do
		{								 // Możliwość wpisania tylko liczb naturalnych
			t->wiersz = 0;
			cout << "Podaj liczbe wierszy: ";		
			cin >> t->wiersz;

			if(!cin){
			
				cin.clear();   
	    			cin.ignore(100, '\n');
			}

			system("clear");
			
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
		
		
		t->tab = new int *[(t->wiersz)];     				  // Stworzenie tablicy

		for(int i=0; i< (t->wiersz); i++)
		{
			t->tab[i] = new int [(t->kolumna)];		
		}
	}
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// Wprowadzenie wartości do komórki
	else if(*wybor==2)
	{	
		if(t->wiersz==0 || t->kolumna==0)
		{

			cout << "Tablica nie zostala stworzona!" << endl;       // Sprawdzenie czy tablica uprzednio została stworzona
			sleep(3);
			system("clear");
			
			menu(t, wybor);    					// Jeśli nie - powrót do MENU
		}	
			
		int n=0, m=0, wartosc;

		do
		{							// Wybór komorki, do ktorej użytkownik chce wpisać wartość pod warunkiem, że wybrana komórka istnieje 				
			n=0;
			system("clear");
			cout << "Podaj numer wierszu: ";
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
		
		t->tab[n-1][m-1] = wartosc;	
	}

	system("clear");
	menu(t, wybor);	          							 //Powrót do MENU
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int operacje(struct Tablica *t, int *wybor)
{

	if(t->wiersz==0 || t->kolumna==0)
	{
		cout << "Tablica nie zostala stworzona!" << endl;         // Sprawdzenie czy tablica uprzednio została stworzona
		sleep(3);
		system("clear");
		menu(t, wybor);    // Jeśli nie - powrót do MENU
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int m,n, suma=0;
	
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

	if(*wybor==1)
	{
		do		// Wybór wiersza, który ma zostać zsumowany 		
		{	
			m=0;
			system("clear");
			cout << "Podaj numer wiersza: ";	
			cin >> m;
			if(!cin)
			{
				cin.clear();   
	   			cin.ignore(100, '\n');
			}
		
		}while( (t->wiersz <= (m-1)) || (m < 1) ); 


		for(int i=0; i < (t->kolumna); i++)
		{
			suma += t->tab[m-1][i];
		}
		cout<<endl;	
		cout << "Suma wszystkich elementów wiersza o numerze " << m << ", wynosi: " << suma << endl;	
		cout<<endl;				
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if(*wybor==2)
	{
		do		// Wybór kolumny, która ma zostać zsumowana 		
		{	
			n=0;
			system("clear");
			cout << "Podaj numer kolumny: ";	
			cin >> n;
			if(!cin)
			{
				cin.clear();   
	   			cin.ignore(100, '\n');
			}
		
		}while( (t->kolumna <= (n-1)) || (n < 1) ); 

		for(int i=0; i < (t->wiersz); i++)
		{
			suma += t->tab[n-1][i];
		}	
		cout << "\nSuma wszystkich elementów w kolumnie o numerze " << m << ", wynosi: " << suma << endl;	
		cout<<endl;	
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if(*wybor==3)        					  // Największa wartość w konkretnym wierszu
	{
		system("clear");
		int max;
		do			
		{	
			m=0;
			system("clear");
			cout << "Podaj numer wiersza: ";	
			cin >> m;
			if(!cin)
			{
				cin.clear();   
	   			cin.ignore(100, '\n');
			}
		
		}while( (t->wiersz <= (m-1)) || (m < 1) ); 

		max = t->tab[m-1][0];
		for(int i=1; i < t->kolumna; i++)
		{
			
			if(max < t->tab[m-1][i])
			{
			max = t->tab[m-1][i];
			}
		}
		
		cout<<"Najwieksza wartosc to: " << max << endl;
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if(*wybor==4)          					 // Największa wartość w konkretnej kolumnie
	{
		system("clear");
		int max;
		do			
		{	
			n=0;
			system("clear");
			cout << "Podaj numer kolumny: ";	
			cin >> n;
			if(!cin)
			{
				cin.clear();   
	   			cin.ignore(100, '\n');
			}
		
		}while( (t->kolumna <= (n-1)) || (n < 1) ); 

		max = t->tab[n-1][0];
		for(int i=1; i < t->wiersz; i++)
		{
			
			if(max < t->tab[n-1][i])
			{
			max = t->tab[n-1][i];
			}
		}
		
		cout <<"Najwieksza wartosc to: " << max << endl;
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if(*wybor==5) 						// Najmniejsza wartość w konkretnym wierszu
	{
		system("clear");
		int min;
		do			
		{	
			m=0;
			system("clear");
			cout << "Podaj numer wiersza: ";	
			cin >> m;
			if(!cin)
			{
				cin.clear();   
	   			cin.ignore(100, '\n');
			}
		
		}while( (t->wiersz <= (m-1)) || (m < 1) ); 

		min = t->tab[m-1][0];
		for(int i=1; i < t->kolumna; i++)
		{
			
			if(min > t->tab[m-1][i])
			{
			min = t->tab[m-1][i];
			}
		}
		
		cout<<"Najmniejsza wartosc to: " << min << endl;
	}

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if(*wybor==6)						// Najmniejsza wartość w konkretnej kolumnie
	{
		system("clear");
		int min;
		do			
		{	
			n=0;
			system("clear");
			cout << "Podaj numer kolumny: ";	
			cin >> n;
			if(!cin)
			{
				cin.clear();   
	   			cin.ignore(100, '\n');
			}
		
		}while( (t->kolumna <= (n-1)) || (n < 1) ); 

		min = t->tab[n-1][0];
		for(int i=1; i < t->wiersz; i++)
		{
			
			if(min > t->tab[n-1][i])
			{
			min = t->tab[n-1][i];
			}
		}
		
		cout<<"Najmniejsza wartosc to: " << min << endl;
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if(*wybor==7)          					 // Średnia wartość w konkretnym wierszu
	{
		do			
		{	
			m=0;
			system("clear");
			cout << "Podaj numer wiersza: ";	
			cin >> m;
			if(!cin)
			{
				cin.clear();   
	   			cin.ignore(100, '\n');
			}
		
		}while( (t->wiersz <= (m-1)) || (m < 1) );
		
		float srednia=0;
		for(int i=0; i<t->kolumna; i++)
		{
			 srednia += t->tab[m-1][i];
		}
		
		cout<< "Wartosc srednia wynosi: " << srednia / (t->kolumna) << endl;
	}
		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if(*wybor==8)       					    // Średnia wartość w konkretnej kolumnie
	{
		do			
		{	
			n=0;
			system("clear");
			cout << "Podaj numer kolumny: ";	
			cin >> n;
			if(!cin)
			{
				cin.clear();   
	   			cin.ignore(100, '\n');
			}
		
		}while( (t->kolumna <= (n-1)) || (n < 1) );
		
		float srednia=0;
		for(int i=0; i<t->wiersz; i++)
		{
			 srednia += t->tab[n-1][i];
		}
		
		cout<< "Wartosc srednia wynosi: " << srednia / (t->wiersz) << endl;
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	cout<<endl;
	cout<<"=================================================================\n"<<endl;	
	menu(t, wybor);
}

