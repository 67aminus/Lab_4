/*Ввести количество рядов r (2..8) и мест в каждой половине ряда h (1..5).
Вложенными циклами вывести план зала: в каждом ряду сначала h мест, затем проход ||, затем ещё h мест.
Место помечать X, если (номер ряда + номер места во всём ряду) кратен 3, иначе точкой.
Посчитать общее количество X.*/
#include <iostream>

using namespace std;
int main() {
	int r;
	int h;
	int allX = 0;
	int helpR = 1;
	int helpH = 1;
	int quantity = 0;

	do {
		cout << "Введите количество рядов (2..8): ";
		cin >> r;
		cout << "Введите количество мест в каждой половине зала (1..5): ";
		cin >> h;
	} while (r < 2 || r > 8 || h < 1 || h > 5);

	while (helpR <= r) {
		while (quantity < 2) {
			while (helpH <= h * (quantity + 1)) {
				if ((helpH + helpR) % 3 != 0) cout << ".";
				else {
					cout << "X";
					allX++;
				}
				helpH++;
			}
			if (quantity == 0) cout << " || ";
			quantity++;
		}
		cout << endl;
		helpR++;
		helpH = 1;
		quantity = 0;
	}

	cout << "\nОбщее количество X: " << allX;

	return 0;
}