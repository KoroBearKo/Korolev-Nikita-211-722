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
	cout << "1. ";
	// 1. Даны две переменные целого типа: A и B. Если их значения не равны, то присвоить каждой переменной большее из этих значений, а если равны, то присвоить переменным нулевые значения. 
	// Вывести новые значения переменных A и B.
	int A, B;
	A = 3; B = 6;
	cout << "A = " << A << ", B = " << B << endl;
	if (A == B)
	{
		A = 0; B = 0;
	}
	else
	{
		if (A > B) B = A;
		else A = B;
	}
	cout << "A = " << A << ", B = " << B;
	cout << endl;

	// 2. Даны три числа. Найти сумму двух наибольших из них
	cout << "2. ";
	int C, sum;
	A = 10; B = 11; C = 12;
	if (B <= C && B <= A) 
	{
		cout << B + C;
	}
	else {
		if (A <= C && A <= B) {
			cout << B + C;
		}
		else {
			cout << B + A;
		}
	}
	cout << endl;

	// 3. На плоскости расположены три точки: A, B, C. 
	// Определить, какая из двух последних точек (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A.
	cout << "3. ";
	double Ax, Ay, Bx, By, Cx, Cy;
	double line1, line2;
	Ax = 0; Ay = 0;
	Bx = 30; By = 60;
	Cx = 1; Cy = 7;
	line1 = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));
	line2 = sqrt(pow(Ax - Cx, 2) + pow(Ay - Cy, 2));
	if (line1 < line2) cout << "B " << Bx << " " << By;
	else cout << "C " << Cx << " " << Cy;
	cout << endl;

	// 4. Даны координаты точки, не лежащей на координатных осях OX и OY. 
	// Определить номер координатной четверти, в которой находится данная точка
	cout << "4. ";
	double dotX, dotY;
	dotX = 1; dotY = -5;
	if (dotX > 0)
	{
		if (dotY > 0) cout << "Первая четверть";
		else cout << "Четвертая четверть";
	}
	else
	{
		if (dotY > 0) cout << "Вторая четверть";
		else cout << "Третья четверть";
	}
	cout << endl;

	// 5. Дано целое число. Вывести его строку-описание вида «отрицательное четное число», «нулевое число», «положительное нечетное число» и т. д.
	cout << "5. ";
	int number, zero;
	number = 420;
	if (number > 0) zero = 1;
	else
	{
		if (number < 0) zero = -1;
		else zero = 0;
	}
	switch (zero)
	{
	case 1:
		if (number % 2 == 0) cout << "Положительное четное число";
		else cout << "Полочительное нечетное число";
		break;
	case -1:
		if (number % 2 == 0) cout << "Отрицательное четное число";
		else cout << "Отрицательное нечетное число";
		break;
	case 0:
		cout << "Нулевое число";
		break;
	}
	cout << endl;

	// 6. Дано целое число, лежащее в диапазоне 1–999. 
	// Вывести его строку описание вида «четное двузначное число», «нечетное трехзначное число» и т. д.
	cout << "6. ";
	number = 368;
	if (number % 2 == 0) cout << "Четное ";
	else cout << "Нечетное ";
	if (number < 10) cout << "однозначное ";
	else if (number >= 10 && number < 100) cout << "двузначное ";
	else cout << "трехзначное ";
	cout << "число";

}