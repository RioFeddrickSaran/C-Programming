#include <stdio.h>
int main(){
    int a,count=0;
    scanf("%d",&a);
    for(int j=1;j<=a;j++){
        count=0;
    for(int i=1;i<=j;i++){
        if(j%i==0){
            count++;}}
    if(count==2){
    printf("%d ",j);}}
}