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
	// 1. Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). 
	// Вывести дату в виде текста (например, «пятое января»).
	cout << "1. ";
	string day[31]{ "Первое","Второе","Третье","Четвертое","Пятоtе","Шестое","Седьмое","Восмое","Девятое","Десятое","Одиннадцатое","Двенадцатое",
		"Тринадцатое","Четырнадцатое","Пятнадцатое","Шестнадцатое","Семнадцатое","Восемнадцатое","Девятнадцатое","Двадцатое","Двадцать первое","Двадцать второе",
		"Двадцать третье","Двадцать четвертое","Двадцать пятое	","Двадцать шестое","Двадцать седьмое","Двадцать восьмое","Двадцать девятое","Тридцатое","Тридцать первое" };
	string mounth[12]{"января" ,"февраля" ,"марта" ,"апреля" ,"мая" ,"июня" ,"июля" ,"августа" ,"сентября" ,"октября" ,"ноября" ,"декабря"};
	string Oday, Omounth;
	int Iday, Imounth;
	Iday = 23; Imounth = 1; // Данные нам значения
	Iday -= 1; Imounth -= 1; // Для совпадения номеров с массивом
	Oday = day[Iday]; Omounth = mounth[Imounth];
	cout << Oday << " " << Omounth; // Вывод в консоль
	cout << endl;


	// 2. Робот может перемещаться в четырех направлениях («С» — север, «З» — запад, «Ю» — юг, «В» — восток) 
	// и принимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо. 
	// Дан символ C — исходное направление робота и целое число N — посланная ему команда. Вывести направление робота после выполнения полученной команды
	cout << "2. ";
	char S;
	int N;
	cout << "Введите символ направления («С» — север, «З» — запад, «Ю» — юг, «В» — восток): ";
	cin >> S;
	cout << "Введите цифровую команду для робота (0 — продолжать движение, 1 — поворот налево, -1 — поворот направо): ";
	cin >> N;
	cout << "Направление - ";
	switch (N) {
	case 1: switch (S) {
	case 'С': cout << "З"; break;
	case 'Ю': cout << "В"; break;
	case 'З': cout << "Ю"; break;
	case 'В': cout << "С"; break;
	} break;
	case -1: switch (S) {
	case 'С': cout << "В"; break;
	case 'Ю': cout << "З"; break;
	case 'З': cout << "С"; break;
	case 'В': cout << "Ю"; break;
	} break;
	case 0: switch (S) {
	case 'С': cout << "С"; break;
	case 'Ю': cout << "Ю"; break;
	case 'З': cout << "З"; break;
	case 'В': cout << "В"; break;
	} break;
	}
	cout << endl;

	cout << "3. ";
	// Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме. 
	// Вывести строку-описание указанного количества заданий, обеспечив правильное согласование числа со словами «учебное задание», например: 18 — «восемнадцать учебных заданий». 
    int n;
    cout << "кол-во:";
    cin >> n;

    if (n / 10 == 1)
        switch (n) {
        case 10:
            cout << "десять учебных заданий.";
            break;
        case 11:
            cout << "одинадцать учебных заданий.";
            break;
        case 12:
            cout << "двенадцать учебных заданий.";
            break;
        case 13:
            cout << "тринадцать учебных заданий.";
            break;
        case 14:
            cout << "четырнадцать учебных заданий.";
            break;
        case 15:
            cout << "пятнадцать учебных заданий.";
            break;
        case 16:
            cout << "шестнадцать учебных заданий.";
            break;
        case 17:
            cout << "семнадцать учебных заданий.";
            break;
        case 18:
            cout << "восемнадцать учебных заданий.";
            break;
        case 19:
            cout << "девятнадцать учебных заданий.";
            break;
        }
    else {
        switch (n / 10) {
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
        }

        switch (n % 10) {
        case 1:
            cout << "одно ";
            break;
        case 2:
            cout << "два ";
            break;
        case 3:
            cout << "три ";
            break;
        case 4:
            cout << "четыре ";
            break;
        case 5:
            cout << "пять ";
            break;
        case 6:
            cout << "шесть ";
            break;
        case 7:
            cout << "семь ";
            break;
        case 8:
            cout << "восемь ";
            break;
        case 9:
            cout << "девять ";
            break;
        }

        switch (n % 10) {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            cout << "учебных заданий.";
            break;
        case 1:
            cout << "учебное задание.";
            break;
        case 2:
        case 3:
        case 4:
            cout << "учебных задания.";
            break;
        }
    }

    cout << endl;

    cout << "4. ";
    // Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа, например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать».
    printf("Число:");
    cin >> n;

    switch (n / 100) {
    case 1:
        printf("сто ");
        break;
    case 2:
        printf("двести ");
        break;
    case 3:
        printf("триста ");
        break;
    case 4:
        printf("четыреста ");
        break;
    case 5:
        printf("пятьсот ");
        break;
    case 6:
        printf("шестьсот ");
        break;
    case 7:
        printf("семьсот ");
        break;
    case 8:
        printf("восемьсот  ");
        break;
    case 9:
        printf("девятьсот  ");
        break;
    }

    if ((n % 100) / 10 == 1)
        switch (n % 100) {
        case 10:
            printf("десять\n");
            break;
        case 11:
            printf("одинадцать\n");
            break;
        case 12:
            printf("двенадцать\n");
            break;
        case 13:
            printf("тринадцать\n");
            break;
        case 14:
            printf("четырнадцать\n");
            break;
        case 15:
            printf("пятнадцать\n");
            break;
        case 16:
            printf("шестнадцать\n");
            break;
        case 17:
            printf("семнадцать\n");
            break;
        case 18:
            printf("восемнадцать\n");
            break;
        case 19:
            printf("девятнадцать\n");
            break;
        }
    else {
        switch ((n % 100) / 10) {
        case 2:
            printf("двадцать ");
            break;
        case 3:
            printf("тридцать ");
            break;
        case 4:
            printf("сорок ");
            break;
        case 5:
            printf("пятьдесят ");
            break;
        case 6:
            printf("шестьдесят ");
            break;
        case 7:
            printf("семьдесят ");
            break;
        case 8:
            printf("восемьдесят ");
            break;
        case 9:
            printf("девяносто ");
            break;
        }

        switch (n % 10) {
        case 1:
            printf("один\n");
            break;
        case 2:
            printf("два\n");
            break;
        case 3:
            printf("три\n");
            break;
        case 4:
            printf("четыре\n");
            break;
        case 5:
            printf("пять\n");
            break;
        case 6:
            printf("шесть\n");
            break;
        case 7:
            printf("семь\n");
            break;
        case 8:
            printf("восемь\n");
            break;
        case 9:
            printf("девять\n");
            break;
        }
    }
    cout << endl;

    // 5. В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, обозначаемых названиями цветa:
    //зеленый, красный, желтый, белый и черный. В каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи.
   // По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы».
    cout << "5. ";

    cout << "Год:";
    cin >> n;

    cout << "год ";

    switch ((n) % 10) {
    case 0:
    case 1:
        cout << "бел";
        break;
    case 2:
    case 3:
        cout << "черн";
        break;
    case 4:
    case 5:
        cout << "зелён";
        break;
    case 6:
    case 7:
        cout << "красн";
        break;
    case 8:
    case 9:
        cout << "жёлт";
        break;
    }

    switch ((n + 1) % 5) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
        cout << "ой ";
        break;
    case 6:
    case 7:
    case 8:
        cout << "ого ";
        break;
    }

    switch ((n + 8) % 12) {
    case 0:
        cout << "крысы";
        break;
    case 1:
        cout << "коровы";
        break;
    case 2:
        cout << "тигра";
        break;
    case 3:
        cout << "зайца";
        break;
    case 4:
        cout << "дракона";
        break;
    case 5:
        cout << "змеи";
        break;
    case 6:
        cout << "лошади";
        break;
    case 7:
        cout << "овцы";
        break;
    case 8:
        cout << "обезьяны";
        break;
    case 9:
        cout << "курицы";
        break;
    case 10:
        cout << "собаки";
        break;
    case 11:
        cout << "свиньи";
        break;
    }
}