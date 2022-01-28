

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//zad 1
	int numer = 5;
	int numer1 = 7;
	int numer2 = 3;
	int* wskaznik;
	int* wskaznik1;
	int* wskaznik2;

	wskaznik = &numer;
	wskaznik1 = &numer1;
	wskaznik2 = &numer2;
	cout << "Adres zmiennej numer to " << wskaznik << " a wartosc " << numer << endl;
	int roznica = *wskaznik1 - *wskaznik;
	cout << "roznica wynosi " << roznica << endl;
	int srednia = (*wskaznik + *wskaznik1 + *wskaznik2) / 3;
	cout << "srednia trzech wskaznikow wynosi " << srednia << endl;
	
	//zad 2
	int tab[10];
	int* wsktab;
	int* wsktab4;
	wsktab = &tab[0];
	wsktab4 = &tab[3];
	cout << "Adres pierwszego elementu tab " << wsktab << endl;
	cout << "Adres czwartego elementu tab " << wsktab4 << endl;


	//zad 4
	int liczba = 4;
	int* wsk;
	wsk = &liczba;
	cout << "potega liczby 4 " << * wsk * *wsk << endl;

	//zad 5
	int liczba1;
	int potega1;
	int* licz;
	int* pot;
	licz = &liczba1;
	pot = &potega1;
	
	cout << "podaj liczbe ";
	cin >> liczba1;
	cout << "podaj potege ";
	cin >> potega1;

	cout << pow(*licz, *pot);
		
}


