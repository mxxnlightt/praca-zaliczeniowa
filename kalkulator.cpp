#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

// Wczytuje liczbę typu double z wejścia. W pętli prosi dopóki nie otrzyma poprawnej liczby.
double read_double(const string &prompt) {
	double x;
	while (true) {
		cout << prompt;
		if (cin >> x) return x;
		// błąd konwersji
		cout << "Niepoprawna liczba. Spróbuj ponownie." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}

// Wczytuje liczbę całkowitą typu long long (dla operacji modulo)
long long read_int(const string &prompt) {
	long long x;
	while (true) {
		cout << prompt;
		if (cin >> x) return x;
		cout << "Niepoprawna liczba całkowita. Spróbuj ponownie." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}

int main() {
	cout << "Kalkulator - prosty program konsolowy" << endl;
	cout << "Autor: (automatycznie wygenerowany kod)" << endl;

	while (true) {
		cout << "\nWybierz operację:" << endl;
		cout << " 1) Dodawanie (+)" << endl;
		cout << " 2) Odejmowanie (-)" << endl;
		cout << " 3) Mnożenie (*)" << endl;
		cout << " 4) Dzielenie (/)" << endl;
		cout << " 5) Potęgowanie (x^y)" << endl;
		cout << " 6) Modulo (a % b) - całkowite" << endl;
		cout << " 0) Wyjście" << endl;

		cout << "Wybór: ";
		int choice;
		if (!(cin >> choice)) {
			cout << "Niepoprawny wybór. Wprowadź cyfrę menu." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}

		if (choice == 0) {
			cout << "Koniec. Do widzenia!" << endl;
			break;
		}

		switch (choice) {
			case 1: {
				double a = read_double("Podaj pierwszą liczbę: ");
				double b = read_double("Podaj drugą liczbę: ");
				cout << "Wynik: " << (a + b) << endl;
				break;
			}
			case 2: {
				double a = read_double("Podaj pierwszą liczbę: ");
				double b = read_double("Podaj drugą liczbę: ");
				cout << "Wynik: " << (a - b) << endl;
				break;
			}
			case 3: {
				double a = read_double("Podaj pierwszą liczbę: ");
				double b = read_double("Podaj drugą liczbę: ");
				cout << "Wynik: " << (a * b) << endl;
				break;
			}
			case 4: {
				double a = read_double("Podaj dzielną (liczbę): ");
				double b = read_double("Podaj dzielnik (liczbę): ");
				if (b == 0.0) {
					cout << "Błąd: dzielenie przez zero." << endl;
				} else {
					cout << "Wynik: " << (a / b) << endl;
				}
				break;
			}
			case 5: {
				double a = read_double("Podaj podstawę (x): ");
				double b = read_double("Podaj wykładnik (y): ");
				// obsługa potęgowania dla wartości rzeczywistych
				double res = pow(a, b);
				cout << "Wynik: " << res << endl;
				break;
			}
			case 6: {
				long long a = read_int("Podaj pierwszą liczbę całkowitą (a): ");
				long long b = read_int("Podaj drugą liczbę całkowitą (b): ");
				if (b == 0) {
					cout << "Błąd: modulo przez zero." << endl;
				} else {
					cout << "Wynik: " << (a % b) << endl;
				}
				break;
			}
			default:
				cout << "Nieznana opcja. Wybierz ponownie." << endl;
		}
	}

	return 0;
}
