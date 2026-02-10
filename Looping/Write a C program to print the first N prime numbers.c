#include <stdio.h>
int main(){
    int a,count=0,l=0;
    scanf("%d",&a);
    for(int i=1;l<=a;i++){
        count=0;
    for(int j=1;j<=i;j++){
        if(i%j==0)
            count++;}
    if(count==2)
    printf("%d ",i);
    l++;}
}
