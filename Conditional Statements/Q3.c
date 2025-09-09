#include <stdio.h>
int main() {
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	if(n&1)
	printf("Given number is odd number");
	else
	printf("Given number is even number");
	return 0;
}