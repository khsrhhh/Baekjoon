#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{
    char arr[101];
    
    cin >> arr;
    
    int arr_ten = strlen(arr)/10;
    int arr_last = strlen(arr)%10;
    
      for(int i=0; i<arr_ten; i++)
    {
        for(int j=0; j<10; j++)
        {
            cout << arr[i*10+j];
        }
        cout << endl;
    }
    
    for(int k=0; k<arr_last; k++)
    {
        cout << arr[arr_ten*10+k];
    }
    cout << endl;
    
    return 0;
}
