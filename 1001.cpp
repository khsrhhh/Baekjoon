#include <iostream>

using namespace std;

int sub(int a, int b);

int main(void)
{
	int a, b;

	cin >> a >> b;
	cout << sub(a, b) << endl;
}

int sub(int a, int b)
{
	return a - b;
}
