#include <stdio.h>
int main()
{
	int n,temp=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);}
	int index=0;
	for(int i=0; i<n; i++) {
		if(arr[i]%2==0) {
			temp=arr[i];
			for(int j=i;j>index;j--){
			    arr[j]=arr[j-1];}
			arr[index]=temp;
			index++;}}
	for(int i=0; i<n; i++) {
		printf("%d ",arr[i]);}
}