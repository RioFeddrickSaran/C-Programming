#include <stdio.h>
int main(){
    int n,t,rev=0;
    scanf("%d",&n);
    t=n; 
    while(n>0){
        rev=rev*10+n%10;
        n/=10; }
    if(t==rev)
    printf("Palindrome");
    else
    printf("Not a Palindrome"); 
}