﻿// Задание к теме 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    // 1. Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2)
    double x1, x2, y1, y2, d;
    cout << "1. Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2). Введите координаты первой точки" << endl;
    cout << "Координата x:" << endl;
    cin >> x1;
    cout << "Координата y:" << endl;
    cin >> y1;
    cout << "Введите координаты второй точки" << endl;
    cout << "Координата x:" << endl;
    cin >> x2;
    cout << "Координата y:" << endl;
    cin >> y2;
    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << d << endl;

    // 2. Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму.
    double A, B, C, AC, BC, SUM;
    cout << "2. Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму." << endl;
    cout << "Координата точки А:" << endl;
    cin >> A;
    cout << "Координата точки B:" << endl;
    cin >> B;
    cout << "Координата точки C:" << endl;
    cin >> C;
    AC = C - A;
    BC = C - B;
    SUM = AC + BC;
    cout << "Длина отрезка АС:" << endl;
    cout << AC << endl;
    cout << "Длина отрезка BC:" << endl;
    cout << BC << endl;
    cout << "Сумма длинн отрезков:" << endl;
    cout << SUM << endl;

    //3. Даны три точки A, B, C на числовой оси. Точка C расположена между точками A и B.Найти произведение длин отрезков AC и BC
    double mult;
    cout << "3. Даны три точки A, B, C на числовой оси. Точка C расположена между точками A и B. Найти произведение длин отрезков AC и BC" << endl;
    cout << "Координата точки А:" << endl;
    cin >> A;
    cout << "Координата точки B:" << endl;
    cin >> B;
    cout << "Координата точки C:" << endl;
    cin >> C;
    AC = C - A;
    BC = B - C;
    mult = AC * BC;
    cout << "Длина отрезка АС:" << endl;
    cout << AC << endl;
    cout << "Длина отрезка BC:" << endl;
    cout << BC << endl;
    cout << "Произведение длинн отрезков:" << endl;
    cout << mult << endl;

    //4.Даны координаты двух противоположных вершин прямоугольника: (x1, y1), (x2, y2). Стороны прямоугольника параллельны осям координат. Найти периметр и площадь данного прямоугольника.
    double Per, Area;
    cout << "4. Даны координаты двух противоположных вершин прямоугольника: (x1, y1), (x2, y2)." << endl;
    cout << "Стороны прямоугольника параллельны осям координат." << endl;
    cout << "Найти периметр и площадь данного прямоугольника." << endl;
    cout << "Введите координаты вершин прямоуглоьника:" << endl;
    cout << "Координата x1:" << endl;
    cin >> x1;
    cout << "Координата y1:" << endl;
    cin >> y1;
    cout << "Координата x2:" << endl;
    cin >> x2;
    cout << "Координата y2:" << endl;
    cin >> y2;
    Per = 2 * ((x2 - x1) + (y2 - y1));
    Area = (x2 - x1) * (y2 - y1);
    cout << "Периметр прямоугольника: " << Per << endl;
    cout << "Площадь прямоугольника: " << Area << endl;

    //5. Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь
    double x3, y3, side1, side2, side3;
    cout << "5. Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь" << endl;
    cout << "Координата x1:" << endl;
    cin >> x1;
    cout << "Координата y1:" << endl;
    cin >> y1;
    cout << "Координата x2:" << endl;
    cin >> x2;
    cout << "Координата y2:" << endl;
    cin >> y2;
    cout << "Координата x3:" << endl;
    cin >> x3;
    cout << "Координата y3:" << endl;
    cin >> y3;
    side1 = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    side2 = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
    side3 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    Per = side1 + side2 + side3;
    Area = sqrt((Per / 2) * ((Per / 2)-side1) * ((Per / 2)-side2) * ((Per / 2)-side3));
    cout << "Периметр треугольника: " << Per << endl;
    cout << "Площадь треугольника: " << Area << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
