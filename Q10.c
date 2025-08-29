#include <stdio.h>
int main() {
    int num;
    printf("Enter a octal number :");
    scanf("%o",&num);
    printf("%d is integer of %o",num,num);
    return 0;
}