// ConsoleApplication14.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <stdlib.h>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	float lvlhero;
	float weaponlevel;
	float weapondmg;
	float resultdmg;
	int operacja = 1;
	char yes = 'y';

	do {
		cout << "*****************************************************\n" << endl;
		cout << "\t\tWybierz operacja\n" << endl;
		cout << "*****************************************************\n" << endl;
		cout << "1. Redukcja dmg broni dla low lvl" << endl;
		cout << "0. Wyjście" << endl;
		cin >> operacja;
		switch (operacja)
		{
			
		case 1:
			cout << "Prosze podac twoj poziom w Tibii postacia na ktora grasz: ";
			cin >> lvlhero;
			cout << "Wymagania poziom broni: ";
			cin >> weaponlevel;
			cout << "Obrazenia od broni: ";
			cin >> weapondmg;

			resultdmg = (lvlhero / weaponlevel) * weapondmg;

			cout << "Obliczanie: " << lvlhero << " / " << weaponlevel << " * " << weapondmg << endl;
			if (resultdmg == weapondmg) {
				cout << "Obrazenia od broni na twoim poziomie bylby: " << resultdmg << endl;
			}
			else {
				cout << "Obrazenia od broni na twoim poziomie bylby: " << resultdmg << " zamiast " << weapondmg << endl;
			}
			cout << "Kontynuowac dalej? (y): ";
			cin >> yes;
			system("CLS");
			break;
		case 0:
			break;
		}
	} while (operacja != 0);
}

