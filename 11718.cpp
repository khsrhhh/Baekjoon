#include <iostream>

using namespace std;

int main(void)
{
	for (int i = 0; i < 100; i++)
	{
		char a[100];

		//cin >> a;
		cin.getline(a, 101, '\n');
		cout << a << endl;
	}

	return 0;
}