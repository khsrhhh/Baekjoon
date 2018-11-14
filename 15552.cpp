#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int num, a, b;
	cin >> num;
	
	for(int i=0; i<num; i++)
	{
		cin >> a;	cin >> b;
		cout << a+b << '\n';
	}
	
	return 0;
}