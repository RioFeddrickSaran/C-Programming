#include <stdio.h>
int main(){
    int a,b,lcm,gcd,mul;
    scanf("%d %d",&a,&b);
    mul=a*b;
    lcm=(a<b)?b:a;
    while(1){
        if(lcm%a==0&&lcm%b==0){
            printf("LCM:%d\n",lcm);
             break;}
    lcm++;}
    gcd=mul/lcm;
    printf("GCD:%d",gcd);

}