#include <stdio.h>
#include <math.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<0){
        printf("Invalid Number");
        return 0;}
    int root=sqrt(a);
    if(root*root==a)
    printf("Perfect Square");
    else
    printf("Not a Perfect Square");}
