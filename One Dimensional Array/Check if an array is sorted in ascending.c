#include <stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++) {
	    count=0;
		if(arr[i]<arr[i+1]){
		    count=1;
			}
		else{
		printf("Array is in Not in Ascending Order");
		break;}
		}
	if(count)
		printf("Array is in Ascending Order");

}