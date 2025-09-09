#include <stdio.h>
int main() {
	int num1,num2;
	printf("Enter a number : ");
	scanf("%d",&num1);
	printf("Enter another number : ");
	scanf("%d",&num2);
	if(num1>num2)
    printf("%d is smaller number",num2);
    else if(num1<num2)
    printf("%d is smaller number",num1);
    else
    printf("Both numbers are equal");
	return 0;
}