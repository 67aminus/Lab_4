/*С помощью do-while запрашивать пару целых чисел «ряд, место», 
пока одновременно не выполнятся условия: ряд 1..12, место 1..20. 
Затем вычислить цену: для рядов 1..4 — 7, для 5..8 — 9, для 9..12 — 11; 
если место от 8 до 13 включительно, добавить 2. 
Вывести принятую пару и окончательную цену.*/
#include <iostream>

using namespace std;
int main() {
	int row;
	int seat;
	int price;

	do {
		cout << "Введите ряд и место: ";
		cin >> row >> seat;
	} while (row < 1 || row > 12 || seat < 1 || seat > 20);
	if (row <= 4) price = 7;
	else if(row <= 8) price = 9;
	else price = 11;
	if (seat >= 8 && seat <= 13) price = price + 2;
	cout << "Ряд " << row << ", место " << seat << "\nОкончательная цена: " << price;
		return 0;
}