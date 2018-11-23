#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    //B<=A<=C or C<=A<=B
    if( ((b<=a)&&(a<=c) )||( (c<=a)&&(a<=b)) )    printf("%d\n",a);
    
    //A<=B<=C or C<=B<=A
    else if( ((a<=b)&&(b<=c) )||( (c<=b)&&(b<=a)) )    printf("%d\n",b);
    
    //A<=C<=B or B<=C<=A
    else if( ((a<=c)&&(c<=b) )||( (b<=c)&&(c<=a)) )    printf("%d\n",c);
    
    return 0;
}