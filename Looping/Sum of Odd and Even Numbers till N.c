#include <stdio.h>
int main(){
    int a,odd=0,even=0;
    scanf("%d",&a);
    for(int j=1;j<=a;j++){
        if(j%2==0){
            even+=j; }
        else{
            odd+=j; }}
    printf("%d %d",odd,even);}