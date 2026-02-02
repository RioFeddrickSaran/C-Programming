#include <stdio.h>
int main()
{
	int n,temp=0,k;
	scanf("%d %d",&n,&k);
	int arr[n];
	printf("Enter Only Distinct Elements :");
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++){
	        for(int j=0;j<n-i-1;j++)
	         {
	            if(arr[j]>arr[j+1]){
	                temp=arr[j];
	                arr[j]=arr[j+1];
	                arr[j+1]=temp;}}}
	    printf("%d",arr[k-1]);
}