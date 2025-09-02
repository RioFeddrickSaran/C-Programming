#include <stdio.h>
int main() {
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    a=a*a*a;
    printf("%d is the cube of given number",a);
    return 0;
}