﻿

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int A, B, C, temp;
    //1. Поменять местами содержимое переменных A и B и вывести новые значения A и B.
    A = 5; B = 3;
    cout << "1. Поменять местами содержимое переменных A и B и вывести новые значения A и B." << endl;
    cout << "A = " << A << "; B = " << B << endl;
    temp = A;
    A = B;
    B = temp;
    cout << "После перемены значений переменных:" << endl;
    cout << "A = " << A << "; B = " << B << endl;

    // 2. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C.
    cout << endl << "2. Даны переменные A, B, C." << endl;
    cout << "Изменить их значения, переместив содержимое A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C." << endl;
    A = 12; B = 45; C = 78;
    cout << "A = " << A << "; B = " << B << "; C = "<< C << endl;
    temp = A;
    A = B;
    B = C;
    C = temp;
    cout << "После перемены значений переменных:" << endl;
    cout << "A = " << A << "; B = " << B << "; C = " << C << endl;

    // 3. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C.
    cout << endl << "3. Даны переменные A, B, C." << endl;
    cout << "Изменить их значения, переместив содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C." << endl;
    A = 12; B = 45; C = 78;
    cout << "A = " << A << "; B = " << B << "; C = " << C << endl;
    temp = A;
    A = C;
    C = B;
    B = temp;
    cout << "После перемены значений переменных:" << endl;
    cout << "A = " << A << "; B = " << B << "; C = " << C << endl;

    //4. Найти значение функции y = 3x^6 - 6x^2 - 7 при данном значении x
    double x, y;
    cout << endl << "4. Найти значение функции y = 3x^6 - 6x^2 - 7 при данном значении x" << endl;
    cout << "Введите значение х:" << endl;
    cin >> x;
    y = pow((3 * x), 6) - pow((6 * x), 2) - 7;
    cout << "y = "<< y << endl;

    // 5. Найти значение функции y = 4(x−3)^6 − 7(x−3)^3 + 2 при данном значении x
    cout << endl << "5. Найти значение функции y = 4(x - 3)^6 - 7(x - 3)^3 + 2 при данном значении x" << endl;
    cout << "Введите значение х:" << endl;
    cin >> x;
    y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
    cout << "y = " << y << endl;

    // 6. Дано число A. Вычислить A^8 , используя вспомогательную переменную и три операции умножения.
    A = 2;
    temp = A;
    temp = temp * temp;
    temp = temp * temp;
    A = temp * temp;
    cout << endl << endl << A;

    // 7. Дано число A. Вычислить A^15, используя две вспомогательные переменные и пять операций умножения.
    A = 2;
    int temp1, temp2;
    temp1 = A;
    temp1 = temp1 * temp1;
    temp2 = A;
    temp2 = temp2 * temp1;
    temp2 = temp2 * temp1;
    temp1 = temp2;
    temp2 = temp2 * temp2;
    temp2 = temp2 * temp1;
    cout << endl << endl << temp2;
}

