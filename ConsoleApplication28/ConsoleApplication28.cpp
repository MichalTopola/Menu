// ConsoleApplication28.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include<limits>

using namespace std;
int iCountHorrner(int wsp[],int stopien, int x,int &y) {
	 y = wsp[stopien-1] * x + wsp[stopien - 2];   
	for (int i = stopien - 1; i > 0; i--) y = (y * x) + wsp[i-1];

	cout << "Wartosc po wyjsciu " << y << endl;
		return 0;
	
}
int iwczytywanieWspolczynnika(int wspolczynnik[], int stopien) {
	
	for (int i = 0; i < stopien; ++i) {
		cout << "Podaj wspolczynnik stojacy przy potedze " << stopien - i << ": ";
		cin >> wspolczynnik[i];
	}
	return 0;
}
int stopienWielomianu(int &stopien) {
	bool czyBlad;
	int wolnaLiczba;
	do {
		cout << "Podaj stopien wielomianu: \n";
		cin >> stopien;
		cin.fail();
		czyBlad = cin.fail();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} while (czyBlad == true);
	if (stopien == 0) {
		cout << "Stopien wielomianu jest rowny 0 nastapi zamkniecie programu." << endl;
		exit(0);
	}
	else if (stopien == 1) {
		cout << "Podaj wolna liczbe: " << endl;
		cin >> wolnaLiczba;
		cout << "Wynik to: " << wolnaLiczba;
		exit(0);
	}
	
	return 0;
}
int argumentWielomianu(int&a) {
	bool czyBlada;
	do {
		cout << "Podaj argument wielomianu: " << endl;
		cin >> a;
		cin.fail();
		czyBlada = cin.fail();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} while (czyBlada == true);
	return 0;
}
int stojacyPrzyPotedze(int wspolczynnik[],int stopien) {
	for (int i = 0; i < stopien; ++i) {
		cout << "Podaj wspolczynnik stojacy przy potedze " << stopien - i << ": "
			<<endl;
		cin >> wspolczynnik[i];
	}
	return 0;
}
int main()
{
	int choice;
	int choice1;
	int stopien = 0;
	int *wspolczynnik;
	int a;
	int y = 0;
	int chocie;
	do{
	cout << "WITAM CIE UZYTKOWNIKU!!" << endl;
	cout << "         MENU     " << endl;
	cout << "1-PODAJ STOPIEN WIELOMIANU" << endl;
	cout << "2-ZAMKNIJ PROGRAM" << endl;
	cin >> chocie;
	system("cls");
	switch (chocie) {
		aaa:
	case 1:
		"\a";
		stopienWielomianu(stopien);
		cout << "1-PODAJ WSPOLCZYNIK STOJACY PRZY POTEDZE:" << endl;
		cout << "2-WROC" << endl;
		cin >> choice;
		system("cls");
		break;
	case 2:
		'\a';
		exit(0);
		break;
	default :
		cout<<"Zly przycisk!!"<<endl;
	}
	} while (choice == 2);
	int wybor = choice;
	switch (wybor) {
	case 1:
		'\a';
		wspolczynnik = new int[stopien + 1];
		stojacyPrzyPotedze(wspolczynnik, stopien);
		system("cls");
		cout << "1-PODAJ WARTOSC AGRUMENTU WIELOMIANU" << endl;
		cout << "2-WROC" << endl;
		cin >> choice1;
		system("cls");
		if(choice1==2)
		goto aaa;
		else 
		argumentWielomianu(a);
		cout << "Stopien: " << stopien << endl;
		cout << "Argument: " << a << endl;
		for (int i = stopien-1; i > 0; i--)
			cout << "Zawartosc szufladek w tablicy o numerze: " << i << " :" << wspolczynnik[i] << endl;
		iCountHorrner(wspolczynnik, stopien, a, y);
		delete[] wspolczynnik;
		break;
	}
		cout << "Wynik to: " << y << endl;
	
		return 0;


	}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
