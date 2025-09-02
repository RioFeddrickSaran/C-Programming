#include <stdio.h>
int main() {
    int a,b;
    printf("Enter a number :");
    scanf("%d",&a);
    b=(a<0)?-a:a;
    printf("Absolute value = %d",b);
    return 0;
}