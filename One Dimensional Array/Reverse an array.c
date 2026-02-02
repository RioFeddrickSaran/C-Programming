#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int rev[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++) {
			rev[i]=arr[n-i-1];
	}
	for(int i=0; i<n; i++) {
		printf("%d ",rev[i]);
	}
}