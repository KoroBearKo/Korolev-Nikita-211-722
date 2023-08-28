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

    // 1. Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий N первых положительных нечетных чисел: 1, 3, 5, . . . .
    cout << "--- 1 ---" << endl;
    int A[100];
    int N;
    N = 5;

    for (int i = 0; i < N; i++) A[i] = 1 + i * 2;

    for (int i = 0; i < N; ++i) cout << "A[" << i << "]=" << A[i] << endl;

    // 2. Дано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии. 
    // Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии: A, A·D, A·D2 , A·D3 , . . .
    cout << "--- 2 ---" << endl;
    int a[10];
    int d, n, i, pow;
    n = 4;
    a[0] = 3;
    d = 2;
    pow = 1;
    for (i = 1; i < n; ++i) 
    {
        pow *= d;
        a[i] = a[0] * pow;
    }

    for (i = 0; i < n; ++i) printf("%i : %i\n", i, a[i]);

    // 3. Даны целые числа N (> 2), A и B.
    // Сформировать и вывести целочисленный массив размера N, первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих
    cout << "--- 3 ---" << endl;
    N = 5;
    a[0] = 2; // a
    a[1] = 6; // b

    for (int i = 2; i < n; ++i) 
    {
        a[i] = 0;
        int i2;
        for (i2 = 0; i2 < i; ++i2) a[i] += a[i2];
    }
    for (i = 0; i < n; ++i) cout << i << ": " << a[i] << endl;

    //4. Дан массив A размера N. Вывести его элементы в следующем порядке: A1, AN , A2, AN−1, A3, AN−2,
    cout << "--- 4 ---" << endl;
    n = 6;
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    a[5] = 6;

    //for (i = 0; i < n; ++i) 
    //{
    //    cout << "A[" << i << "] = ";
    //    cin >> a[i];
    //}

    for (i = 0; i < n/2; i++) 
    {
        cout << a[i] << endl;
        cout << a[n - i-1] << endl;
    }
        if (n % 2 == 1) cout << n / 2 +1;

    // 5. Дан массив A размера N. Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров, а затем — элементы с четными номерами в порядке убывания номеров
    cout << "--- 5 ---" << endl;
    n = 10;
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    a[5] = 6;
    a[6] = 7;
    a[7] = 8;
    a[8] = 9;
    a[9] = 10;

    //for (i = 0; i < n; ++i) {
    //    cout << "A[" << i << "] = ";
    //    cin >> a[i];
    //}
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1) cout << a[i] << endl;
    }
    for (int i = n-1; i != 0; i--)
    {
        if (a[i] % 2 == 0) cout << a[i] << endl;
    }

}