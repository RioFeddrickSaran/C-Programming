#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number a:");
    scanf("%d",&a);
    printf("enter a number b:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("%d and %d are a and b",a,b);
    return 0;
}