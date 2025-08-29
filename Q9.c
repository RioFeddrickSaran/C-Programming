#include <stdio.h>
int main() {
    int num;
    printf("Enter a hexadecimal number :");
    scanf("%X",&num);
    printf("%d is integer of %X",num,num);
    return 0;
}