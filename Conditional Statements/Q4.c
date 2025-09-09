#include <stdio.h>
int main() {
	int a,b;
	printf("Enter a number :");
	scanf("%d",&a);
	printf("Enter another number :");
	scanf("%d",&b);
	int n=a-b;
	if(n&1)
	printf("odd number");
	else
	printf("even number");
	return 0;
}