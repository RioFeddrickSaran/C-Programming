#include <stdio.h>
int main(){
	char a[20];
	printf("Enter two words :");
	scanf("%[^\n]s",a);
	printf(" \"%s\" is entered words",a);
	return 0;
}