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
	cout << "������� ����� �������:" << "\n";
	cin >> N;
	switch (N)
	{
	case 1:
	{
		bool d;
		int x;
		cout << "�������� ������" << "\n";
		cin >> x;
		int y;
		cout << "�������� ������" << "\n";
		cin >> y;
		d = !(x && !y) || x;//�������� d true
		cout << "d:" << "" << d << "\n";
		d = y || !x || !y;//�������� d true
		cout << "d:" << "" << d << "\n";
		d = !y && !x || y;//�������� d true
		cout << "d:" << "" << d << "\n";
		d = !(x && y) || y;//�������� d false
		cout << "d:" << "" << d << "\n";
	}
	break;
	case 2:
	{
		int H;
		cout << "�������� ��������:" << "\n";
		cin >> H;
		switch (H)
		{
		case 1:
		{
			int x;
			cout << "�������� ������" << "\n";
			cin >> x;
			int y;
			cout << "�������� ������" << "\n";
			cin >> y;
			if (x > 2 || y > 3)
			{
				cout << "�������" << "\n";
			}
			else if (x > 1 || y > -2)
			{
				cout << "�������" << "\n";
			}
			else if (x >= 0 || y < 5)
			{
				cout << "�������" << "\n";
			}
			else if (x > 3 || x < -1)
			{
				cout << "�������" << "\n";
			}
			else if (x > 3 && x < 10)
			{
				cout << "�������" << "\n";
			}
			else
			{
				cout << "����" << "\n";
			}
		}
		break;
		}
	case 11:
	{
		int a;
		cout << "�������� ������" << "\n";
		cin >> a;
		int b;
		cout << "�������� ������" << "\n";
		cin >> b;
		int c;
		cout << "�������� ������" << "\n";
		cin >> c;
		if (a > 100 && 100 < b)
		{
			cout << "�������" << "\n";
		}
		if (a % 2 == 0 && b < 0)
		{
			cout << "�������" << "\n";
		}
		if (a > 0 && b == 0)
		{
			cout << "�������" << "\n";
		}
		if (a % 3 == 0 && b % 3 == 0 && c % 3 == 0)
		{
			cout << "�������" << "\n";
		}
		if (a < 50 && b>50 && c > 50)
		{
			cout << "�������" << "\n";
		}
		if (a < 0 || b>0 || c < 0)
		{
			cout << "�������" << "\n";
		}
		else
		{
			cout << "����" << "\n";
		}
	}
	break;
	case 12:
	{
		int x;
		cout << "�������� ������" << "\n";
		cin >> x;
		int y;
		cout << "�������� ������" << "\n";
		cin >> y;
		int z;
		cout << "�������� ������" << "\n";
		cin >> z;
		if (x % 1 == 0 && y % 2 == 0)
		{
			cout << "�������" << "\n";
		}
		else
		{
			cout << "����" << "\n";
		}

		if (x > 20 && 20 < y)
		{
			cout << "�������" << "\n";
		}
		else
		{
			cout << "����" << "\n";

		}
		if (x == 0 && y < 0)
		{
			cout << "�������" << "\n";
		}
		if (x < 0 || y < 0 || z < 0)
		{
			cout << "�������" << "\n";
		}
		if (x % 5 == 0 && y > 0 && z > 0)
		{
			cout << "�������" << "\n";
		}
		if (x > 100 || y < 0 || z < 0)
		{
			cout << "�������" << "\n";
		}
		else
		{
			cout << "����" << "\n";

		}

	}
	break;

	}
	break;

	}
	goto bigboss;
	return 0;
}