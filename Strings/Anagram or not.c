#include <stdio.h>
#include <ctype.h> 
int main() {
    char str1[100];
    char str2[100];
    fgets(str1, sizeof(str1), stdin); 
    fgets(str2, sizeof(str2), stdin); 
    int len1=strlen(str1);
    int len2=strlen(str2);
    for(int i=1;i<len1;i++){
        for(int j=0;j<len1-i;j++){
            if(str1[j]>str1[j+1]){
                char temp=str1[j];
                str1[j]=str1[j+1];
                str1[j+1]=temp;}}}
    for(int i=1;i<len2;i++){
        for(int j=0;j<len2-i;j++){
            if(str2[j]>str2[j+1]){
                char temp=str2[j];
                str2[j]=str2[j+1];
                str2[j+1]=temp;}}}
    int result=strcmp(str1,str2);
    if(result==0)
    printf("Anagram");
    else
    printf("Not an Anagram");
}

