#include <stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]); 
    }
    for(int i=0;i<n;i++)
    {
      if(arr[i]==0)
      count++;
    }
    printf("%d",count);
}