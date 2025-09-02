#include <stdio.h>
int main() {
    int a;
    printf("Enter a three digit number :");
    scanf("%d",&a);
    a=a%100;
    a=a/10;
    printf("%d is the middle digit of given number",a);
    return 0;
}