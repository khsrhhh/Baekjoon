#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int i, j;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}