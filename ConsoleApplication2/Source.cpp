#include <stdio.h>
#include <locale.h>
#include <iostream>
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
		bool d;
		int x;
		cout << "Введитие данные" << "\n";
		cin >> x;
		int y;
		cout << "Введитие данные" << "\n";
		cin >> y;
		d = !(x && !y) || x;//значение d true
		cout << "d:" << "" << d << "\n";
		d = y || !x || !y;//значение d true
		cout << "d:" << "" << d << "\n";
		d = !y && !x || y;//значение d true
		cout << "d:" << "" << d << "\n";
		d = !(x && y) || y;//значение d false
		cout << "d:" << "" << d << "\n";
	}
	break;
	case 2:
	{
		int H;
		cout << "Введитие подпункт:" << "\n";
		cin >> H;
		switch (H)
		{
		case 1:
		{
			int x;
			cout << "Введитие данные" << "\n";
			cin >> x;
			int y;
			cout << "Введитие данные" << "\n";
			cin >> y;
			if (x > 2 || y > 3)
			{
				cout << "Истинна" << "\n";
			}
			else if (x > 1 || y > -2)
			{
				cout << "Истинна" << "\n";
			}
			else if (x >= 0 || y < 5)
			{
				cout << "Истинна" << "\n";
			}
			else if (x > 3 || x < -1)
			{
				cout << "Истинна" << "\n";
			}
			else if (x > 3 && x < 10)
			{
				cout << "Истинна" << "\n";
			}
			else
			{
				cout << "Ложь" << "\n";
			}
		}
		break;
		}
	case 11:
	{
		int a;
		cout << "Введитие данные" << "\n";
		cin >> a;
		int b;
		cout << "Введитие данные" << "\n";
		cin >> b;
		int c;
		cout << "Введитие данные" << "\n";
		cin >> c;
		if (a > 100 && 100 < b)
		{
			cout << "Истинна" << "\n";
		}
		if (a % 2 == 0 && b < 0)
		{
			cout << "Истинна" << "\n";
		}
		if (a > 0 && b == 0)
		{
			cout << "Истинна" << "\n";
		}
		if (a % 3 == 0 && b % 3 == 0 && c % 3 == 0)
		{
			cout << "Истинна" << "\n";
		}
		if (a < 50 && b>50 && c > 50)
		{
			cout << "Истинна" << "\n";
		}
		if (a < 0 || b>0 || c < 0)
		{
			cout << "Истинна" << "\n";
		}
		else
		{
			cout << "Ложь" << "\n";
		}
	}
	break;
	case 12:
	{
		int x;
		cout << "Введитие данные" << "\n";
		cin >> x;
		int y;
		cout << "Введитие данные" << "\n";
		cin >> y;
		int z;
		cout << "Введитие данные" << "\n";
		cin >> z;
		if (x % 1 == 0 && y % 2 == 0)
		{
			cout << "Истинна" << "\n";
		}
		else
		{
			cout << "Ложь" << "\n";
		}

		if (x > 20 && 20 < y)
		{
			cout << "Истинна" << "\n";
		}
		else
		{
			cout << "Ложь" << "\n";

		}
		if (x == 0 && y < 0)
		{
			cout << "Истинна" << "\n";
		}
		if (x < 0 || y < 0 || z < 0)
		{
			cout << "Истинна" << "\n";
		}
		if (x % 5 == 0 && y > 0 && z > 0)
		{
			cout << "Истинна" << "\n";
		}
		if (x > 100 || y < 0 || z < 0)
		{
			cout << "Истинна" << "\n";
		}
		else
		{
			cout << "Ложь" << "\n";

		}

	}
	break;

	}
	break;

	}
	goto bigboss;
	return 0;
}