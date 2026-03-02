#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    fgets(s, sizeof(s), stdin);
    for (int i = 0;s[i]!='\0'; i++) {
        if(s[i]!='A'&&s[i]!='a'&&s[i]!='E'&&s[i]!='e'&&s[i]!='I'&&s[i]!='i'&&s[i]!='O'&&
            s[i]!='o'&&s[i]!='U'&&s[i]!='u'){
            printf("%c",s[i]);}}
}
