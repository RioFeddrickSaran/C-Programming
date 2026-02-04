#include <stdio.h>
int main(){
    int a,t,ld=0,sum=0;
    scanf("%d",&a);
    t=a;
    while(t>0){
        ld=t%10;
        int fact=1;
        for(int i=1;i<=ld;i++){
            fact*=i;}
        sum+=fact;
        t/=10;}    
    if(sum==a)
    printf("Strong Number");
    else
    printf("Not a Strong Number");}
