﻿#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
#include <time.h>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	// 1. Даны целые положительные числа A и B (A < B). 
	// Вывести все целые числа от A до B включительно; при этом каждое число должно выводиться столько раз, 
	// каково его значение (например, число 3 выводится 3 раза).
	cout << "1. ";
	int A, B;
	A = 2;
	B = 5;
	for (int n = A; n <= B; n++)
	{
		for (int m = n; m != 0; m--)
		{
			cout << n << " ";
		}
	}
	cout << endl;

	// 2. Даны положительные числа A и B (A > B).
	// На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений).
	// Не используя операции умножения и деления, найти длину незанятой части отрезка A.
	cout << "2. ";
	int a = 9, b = 2;
	int temp = a;
	int num = 0;
	while (a - b >= 0) 
	{
		a -= b;
		++num;
	}
	cout << num;
	cout << endl;

	// 3. Дано целое число N (> 1). Вывести наименьшее из целых чисел K, для которых сумма 1 + 2 + . . . + K будет больше или равна N, и саму эту сумму.
	cout << "3. ";
	double N = 7, K = 0, sum = 0;
	while (sum <= N) 
	{
		K++;
		sum += K;
	}
	cout << K;
	cout << endl;

	// 4. Начальный вклад в банке равен 1000 руб. Через каждый месяц размер вклада увеличивается на P процентов от имеющейся суммы (P — вещественное число, 0 < P < 25). 
	// По данному P определить, через сколько месяцев размер вклада превысит 1100 руб., 
	// и вывести найденное количество месяцев K (целое число) и итоговый размер вклада S (вещественное число).
	cout << "4. ";
	double vklad = 1000, P = 1, S;
	K = 0;
	S = vklad;
	for (vklad; vklad < 1100; K++)
	{
		vklad = vklad + (vklad / 100 * P);
	}
	S = vklad - S;
	cout << K << ", " << S;
	cout << endl;

	// 5. Даны целые положительные числа A и B. Найти их наибольший общий делитель (НОД), используя алгоритм Евклида
	cout << "5. ";
	A = 1000; B = 800;
	while ((A != 0) & (B != 0))
	{
		if (A > B) A = A % B;
		else B = B % A;
	}
	cout << A + B;
	cout << endl;

	// 6. Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK. Найти целое число K — порядковый номер числа Фибоначчи N.
	cout << "6. ";
	N = 69;
	int f1 = 1, f2 = 1, f = 0, k = 2;
	while (f < N) {
		++k;
		f = f2 + f1;
		f2 = f1;
		f1 = f;
	}
	cout << "k:" << k;
	return 0;
}