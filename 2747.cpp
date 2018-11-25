#include <iostream>
#include <stdio.h>
using namespace std;

int fib(int num)
{
    int arr[1000];
    arr[0] = 0; arr[1] = 1;
    
    for (int i=2; i < num+1; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    
    return arr[num];                     
}

int main(void)
{
    int num;
    
    scanf("%d", &num);
    printf("%d\n", fib(num));
    
    return 0;
}