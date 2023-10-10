#include <iostream>
using namespace std;

int main() 
{
	setlocale(0, "");
	cout << "Введите год для проверки: " << endl;
	int u_num;
	cin >> u_num;

	if (u_num % 4 == 0)
	{
		cout << "Год является високосным :]" << endl;
	}

	else
	{
		cout << "Год является обычным, без приколов :[" << endl;
	}

	return 0;
}
