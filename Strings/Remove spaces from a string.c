#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    fgets(s, sizeof(s), stdin);
    for (int i = 0;s[i]!='\0'; i++) {
        if(s[i]!=' '){
            printf("%c",s[i]);}}
}
