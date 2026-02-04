#include <stdio.h>
int main(){
    int a,t,sqrt,count=0,ld=0,d=1;
    scanf("%d",&a);
    sqrt=a*a;
    t=a;
    while(t>0){
        count++;
        t/=10;}
    for(int i=0;i<count;i++){
       d*=10;}
    ld=sqrt%d;
    if(ld==a)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");}
