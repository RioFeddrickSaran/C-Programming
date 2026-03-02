#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    char rev[100];
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    if (s[len-1] == '\n') {
        s[len-1]='\0';
        len--;}
    strcpy(rev, s);
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;}
    if (strcmp(rev, s) == 0)
        printf("Palindrome");
    else
        printf("Not a palindrome");
}
