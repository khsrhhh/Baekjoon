#include <iostream>
using namespace std;

int main(void)
{
	int val;
	int sum = 0;
	
	cin >> val;
	
	for (int i=1; i<val+1; i++)
	{
		sum += i;
	}
	
	cout << sum << endl;
	
	return 0;
}