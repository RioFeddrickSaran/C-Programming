#include <stdio.h>
int main() {
    int a;
    char b;
    float c;
    double d;
    printf("Enter an integer number : ",a);
    scanf("%d",&a);
    printf("Enter a character : ",b);
    scanf(" %c",&b);
    printf("Enter a decimal number upto 6 precision points: ",c);
    scanf(" %f",&c);
    printf("Enter a decimal number upto 15 precision points : ",d);
    scanf(" %lf",&d);
    printf("Size of int is %d bytes\n",sizeof(a));
    printf("Size of char is %d bytes\n",sizeof(b));
    printf("Size of float is %d bytes\n",sizeof(c));
    printf("Size of double is %d bytes",sizeof(d));
    return 0;
}