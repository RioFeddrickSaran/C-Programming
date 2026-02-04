#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=18)
    printf("Eligible for voting");
    else if(n<18)
    printf("Not eligible for voting");
    else
    printf("Invalid Age");
}