#include <stdio.h>
int main(){
	char message [10];
	printf("Enter a message :");
	scanf("%[^\n]s",message);
	printf("%s is entered message",message);
	return 0;
}
     