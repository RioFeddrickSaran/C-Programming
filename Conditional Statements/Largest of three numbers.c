#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&b>c)
    printf("%d is largest number",b);
    else if(b<a&&a>c)
    printf("%d is largest number",a);
    else if(b<c&&c>a)
    printf("%d is largest number",c);
    else
    printf("All are equal");
}