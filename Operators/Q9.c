#include<stdio.h>
int main()
{
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    a=a/10;
    printf("%d is last digit of given number",a);
    return 0;
}