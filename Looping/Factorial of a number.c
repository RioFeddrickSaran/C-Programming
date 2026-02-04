#include <stdio.h>
int main(){
    int n,fact=1;
    scanf("%d",&n); 
    int num=1;
    while(n--){
        fact=fact*num;
        num++;
    }
    printf("%d",fact);
}