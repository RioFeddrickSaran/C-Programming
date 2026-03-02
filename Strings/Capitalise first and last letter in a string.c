#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    fgets(s, sizeof(s), stdin);
    int len=strlen(s);
    if(islower(s[0])){
   s[0]=toupper(s[0]);}
   if(islower(s[len-2])){
   s[len-2]=toupper(s[len-2]);}
    printf("%s",s);
}
