#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int len=strlen(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-'a'+'A';}
        else if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]-'A'+'a';}}
    for(int i=0;i<len/2;i++){
        printf("%c",str[i]);}
    for(int i=len-1;i>=len/2;i--){
        printf("%c",str[i]);}}