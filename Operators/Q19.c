#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("Enter a number :");
    scanf("%d",&b);
    printf("Enter a number :");
    scanf("%d",&c);
    (a>b>c)?printf("%d is greater",a):(a<b<c)?printf("%d is greater",c):printf("%d is greater",b);
    return 0;
}