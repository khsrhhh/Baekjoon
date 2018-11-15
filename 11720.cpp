#include <iostream>
using namespace std;

int main(void)
{
    int num;
    char arr[101];
    int arr_int[101];
    int sum=0;
    
    cin >> num;
    cin >> arr;
    
    for(int i=0; i<num; i++)
    {
        arr_int[i] = arr[i] - 48;
        sum += arr_int[i];
    }
    
    cout << sum << endl;
    
    return 0;
    
}