#include <stdio.h>
int main() {
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    (a>0) ? printf("Positive") : (a<0) ? printf("Negative") : printf("Zero");
    return 0;
}