#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
#include <time.h>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	// 1. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет.
	cout << "1. ";
	double price;// Цена за 1 кг конфет
	double weight;
	cout << "Введите цену за 1 кг кофнет: ";
	cin >> price;
	cout << "Введите требуемый все конфет: ";
	cin >> weight;
	cout << "Стоимость " << weight << " кг конфет = " << (weight * price);
	cout << endl;

	// 2. Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей).
	cout << "2. ";
	double N, mult;
	mult = 1;
	N = 3;
	for (int n = 1; n <= N; n++)
	{
		mult = mult * (1 + (n * 0.1));

	}
	cout << mult;
	cout << endl;

	// 3. Дано целое число N (> 0). 
	// Найти квадрат данного числа, используя для его вычисления следующую формулу: 
	// N^2 = 1 + 3 + 5 + . . . + (2·N − 1). После добавления к сумме каждого слагаемого выводить текущее значение суммы
	cout << "3. ";
	N = 7;
	mult = 0;
	for (int n = 1; n <= N; n++)
	{
		mult += (2 * n - 1);
	}
	cout << mult;
	cout << endl;

	// 4. Дано вещественное число A и целое число N (> 0). Используя один цикл, найти сумму 1 + A + A^2 + A^3 + . . . + A^N
	cout << "4. ";
	int A;
	N = 3;
	A = 3;
	mult = 0;
	for (int n = 0; n <= N; n++)
	{
		mult += pow(A, n);
	}
	cout << mult;
	cout << endl;

	// 5. Дано вещественное число A и целое число N (> 0). Используя один цикл, найти значение выражения 
	// 1 − A + A^2 − A^3 + . ..± A^N .
	// Условный оператор не использовать.
	cout << "4. ";
	N = 3;
	A = 3;
	mult = 0;
	int kek;
	for (int n = 0; n <= N; n++)
	{
		mult = mult + pow((-A), n);
	}
	cout << mult;
}