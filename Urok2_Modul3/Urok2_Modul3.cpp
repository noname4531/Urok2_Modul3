#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>
#include<time.h>

using namespace std;

int main()
{
	cout.setf(ios::boolalpha);
	setlocale(LC_ALL, "RUS");
bigboss:
	int N;
	cout << "Введите номер задания:" << "\n";
	cin >> N;
	switch (N)
	{
	case 1:
	{
		int h;
		cout << "Часы" << "\n";
		cin >> h;
		int m;
		cout << "Минуты" << "\n";
		cin >> m;
		int s;
		cout << "Секунды" << "\n";
		cin >> s;
		int f = 0;
		int day = 0;
		if (s>0)
			s = h % 3600 + m / 60 + s;
		cout << "s с прошедшего дня" << "" << s << endl;
		if (s > 0 && m > 0 && h > 0)
			day = h + m + h * 3600;
		cout << "day:" << "" << "h:" << h << "\t" << "m:" << m << "\t" << "s:" << h * 3600 << "\n";


	}
	break;
	case 2:
	{



		unsigned int a, b = 0;
		cout << "Ввести пятизначное число:";
		scanf("%d", &a, b);
		while (a != 0)

		{
			b = b * 10 + a % 10;
			a = a / 10;
		}
		cout << "Число в перевернутом виде:" << b << "\n";





	}
	break;

	case 3:
	{

		unsigned int n, d = 0;
		cout << "Ввести пятизначное число:";
		scanf("%d", &n, d);
		while (n != 0)
		{



			d = d * 10 + n % 10;
			n = n / 10;



		}

		cout << "пятизначное целое число является  n палиндромом:" << d << "\n";





	}
	break;
	case 4:
	{
		bool f;
		int n = 1 + rand() % 1000;

		f = n / 2;//true;
		cout << "Данное число совершенное?" << "" << n << "\t" << f << endl;
	}
	break;
	case 5:
	{
		int otsenka;
		cout << "Введите домашнее задание:" << "\n";
		cin >> otsenka;
		switch (otsenka)
		{
		case 1:
		{
			int a = 1 + rand() % 2;
			cout << "Двойка" << a << endl;
		}
		break;
		case 2:
		{
			int b = 2 + rand() % 3;
			cout << "Неудволитворительно" << b << endl;
		}
		break;
		case 3:
		{
			int c = 2 + rand() % 4;
			cout << "Хорошо" << c << endl;

		}
		break;
		case 4:
		{
			int d = 1 + rand() % 5;
			cout << "Отлично" << d << endl;
		}
		break;
		default:
			break;
		}
	}
	break;
	case 6:
	{
		int n, n10, n60;
		cout << "Ввести данные" << endl;
		cin >> n;

		n60 = n / 60;
		n = n % 60;
		n10 = n / 10;
		n = n % 10;

		if (n > 8)
		{
			n = 0;
			n10++;
		}

		if (n10 > 3)
		{
			n10 = 0;
			n60++;
		}

		long sum = n * 15 + n10 * 125 + n60 * 440;
		long temp = (n10 + 1) * 125 + n60 * 440;
		if (temp < sum)
		{
			n = 0;
			n10++;
			sum = temp;
		}

		if (440 * (n60 + 1) < sum)
		{
			n10 = 0;
			n60++;
		}

		cout << "Необходимое количество билетов:" << "   " << n << "   " << n10 << "  " << n60 << "\n";

	}
	break;
	case 7:
	{
		int n1 = 15, n5 = 70, n10 = 125, n20 = 230, n60 = 440;
		int n, k1, k5, k10, k20, k60;
		cout << "Ввести данные" << endl;
		cin >> n;
		k60 = n / 60;
		n %= 60;
		k20 = n / 20;
		n %= 20;
		k10 = n / 10;
		n %= 10;
		k5 = n / 5;
		k1 = n % 5;

		if (k1 * n1 >= n5)
		{
			k1 = 0;
			k5++;
		}
		if (k1 * n1 + k5 * n5 >= n10)
		{
			k1 = 0;
			k5 = 0;
			k10++;
		}
		if (k1 * n1 + k5 * n5 + k10 * n10 >= n20)
		{
			k1 = 0;
			k5 = 0;
			k10 = 0;
			k20++;
		}
		if (k1 * n1 + k5 * n5 + k10 * n10 + k20 * n20 >= n60)
		{
			k1 = 0;
			k5 = 0;
			k10 = 0;
			k20 = 0;
			k60++;
		}
		cout << "Необходимое количество билетов:" << k1 << " " << k5 << " " << k10 << " " << k20 << " " << k60 << endl;
	}
	break;
	default:
		break;



	}
	goto bigboss;
	return 0;
}