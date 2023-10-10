#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите число для проверки: " << endl;
	int u_num;
	cin >> u_num;

	if (u_num % 3 == 0 && u_num % 5 == 0) 
	{
		cout << "Число является кратным 3 и 5 одновременно :]" << endl;
	}

	else 
	{
		cout << "Число не является кратным 3 и 5 одновременно :[" << endl;
	}

	return 0;
}
