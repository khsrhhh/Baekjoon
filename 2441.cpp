#include <iostream>
using namespace std;

int main(void)
{
    int val;
    int i, j;
    
    cin >> val;
    
    for (i=0; i<val; i++)
    {
        for (j=0; j<val; j++)
        {
            if( j < i )
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}