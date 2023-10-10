#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите год для проверки: " << endl;
	int u_num;
	cin >> u_num;

	if (u_num % 100 == 0)
	{
		cout << "Год является вековым :]" << endl;
	}

	else 
	{
		cout << "Год не является вековым :[" << endl;
	}
	
	return 0;
}
