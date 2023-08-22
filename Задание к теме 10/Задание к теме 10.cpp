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

	// 1. Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы неравенства A > 2 и B ≤ 3»
	int A, B;
	cout << "1. ";
	cout << "Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы неравенства A > 2 и B ≤ 3»" << endl;
	cout << "Введите А и В: " << endl;
	A = 3; B = 1;
	// cin >> A; cin >> B;
	if (A > 2 && B <= 3) cout << "Истина";
	else cout << "Ложно";
	cout << endl;

	// 2. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C».
	int C;
	cout << "2. ";
	cout << "Введите А, В и С: " << endl;
	A = 1, B = 2, C = 3;
	// cin >> A; cin >> B; cin >> C;
	if (A < B && B < C) cout << "Истина";
	else cout << "Ложно";
	cout << endl;

	// 3. Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным».
	int number;
	number = 100;
	cout << "3. ";
	if ((number % 2) != 1 && (number / 10) < 10) cout << "Данное число является четным двузначным";
	else cout << "Данное число не является четным двузначным";
	cout << endl;

	// 4. Дано трехзначное число. Проверить истинность высказывания:
	// «Цифры данного числа образуют возрастающую или убывающую последовательность».
	int tri, first, second, third;
	tri = 323;
	first = tri / 100;
	second = (tri - (first * 100)) / 10;
	third = tri - (first * 100) - (second * 10);
	cout << "4. ";
	if ((first < second && second < third) || (first > second && second > third)) cout << "Последовательность цифр возрастающая";
	else cout << "Высказывание ложно";
	cout << endl;

	// 5. Дано четырехзначное число. Проверить истинность высказывания: «Данное число читается одинаково слева направо и справа налево».
	cout << "5. ";
	int four, fourth;
	four = 1881;
	first = four / 1000;
	second = (four - (first * 1000)) / 100;
	third = (four - (first * 1000) - (second * 100))/10;
	fourth = four - (first * 1000) - (second * 100) - (third * 10);
	if (first == fourth && second == third) cout << "Высказывание истинно";
	else cout << "Высказывание ложно";
	cout << endl;

	// 6. Даны целые числа a, b, c, являющиеся сторонами некоторого треугольника. Проверить истинность высказывания: «Треугольник со сторонами a, b, c является прямоугольным».
	cout << "6. ";
	int a, b, c;
	a = 3; b = 4; c = 5;
	if ((c * c) == (a * a) + (b * b)) cout << "Истинно";
	else cout << "Ложно";
	cout << endl;

	// 7. Даны целые числа a, b, c. Проверить истинность высказывания: «Существует треугольник со сторонами a, b, c».
	cout << "7. ";
	a = 3; b = 4; c = 5;
	if ((a > (b + c)) || (b > (a + c)) || (c > (a + b))) cout << "Ложно";
	else cout << "Истинно";
	cout << endl;

}