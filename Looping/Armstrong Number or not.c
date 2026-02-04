#include <stdio.h>
int main(){
    int n,t,count=0,power,digit,sum=0;
    scanf("%d",&n);
    t=n; 
    while(t>0){
        count++;
        t/=10; }
    t=n;
    while(t>0){
       power=1;
       digit=t%10;
       for(int i=0;i<count;i++){
        power=power*digit;}
        sum+=power;
        t/=10;}
    if(n==sum)
    printf("Armstrong Number");
    else
    printf("Not a Armstrong Number");   
}