#include <stdio.h>
int main() {
    int roll;
    char nam[50];
    printf("Enter your roll number :");
    scanf("%d",&roll);
    printf("Enter your name :");
    scanf(" %[^\n]s",nam);
    printf("Roll number : %d\n",roll);
    printf("Name : %s",nam);
    return 0;
}