#include <stdio.h>
int main(){
    char grade;
    scanf("%c",&grade);
    switch(grade){
        case 'A':
        case 'a':
        printf("Average");
        break;
        case 'E':
        case 'e':
        printf("Excellent");
        break;
        case 'V':
        case 'v':
        printf("Very Good");
        break;
        case 'G':
        case 'g':
        printf("Good");
        break;
        case 'F':
        case 'f':
        printf("Fail");
        break;
        default:
        printf("Invalid Grade");
    }
}