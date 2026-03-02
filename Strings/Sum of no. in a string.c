#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int sum=0;
    fgets(s, sizeof(s), stdin);
    for (int i = 0;s[i]!='\0'; i++) {
        if(isdigit(s[i])){
            sum+=s[i]-'0';}}
    printf("%d",sum);
}
