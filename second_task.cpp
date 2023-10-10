#include <iostream>
using namespace std;

int main() 
{
	setlocale(0, "");
	cout << "Введите число для проверки: " << endl;
	int u_num;
	cin >> u_num;

	if (u_num > 0)
	{
		cout << "Число положительное :]" << endl;
	}

	else if (u_num < 0)
	{
		cout << "Число отицательное :[" << endl;
	}

	else if (u_num == 0) 
	{
		cout << "Число равно нулю :O" << endl;
	}

	return 0;
}
