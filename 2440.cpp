#include <iostream>
using namespace std;

int main()
{
	int n;
	int i, j;
	
	cin >> n;
	
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			if(i+j < n)
			{
				cout << "*";
			}
		}
        cout << endl;
    }
	return 0;
}