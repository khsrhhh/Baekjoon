/*
���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 70 ~ 79���� C, 
60 ~ 69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    
    int score;
    scanf("%d", &score);
    
    if((score>=90) && (score<=100))        printf("A\n");
    else if((score>=80) && (score<=89))    printf("B\n");
    else if((score>=70) && (score<=79))    printf("C\n");
    else if((score>=60) && (score<=69))    printf("D\n");
    else                                   printf("F\n");
    
    return 0;
}