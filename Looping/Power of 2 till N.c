#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        int temp = i;
        while (temp % 2 == 0 && temp > 1) {
            temp = temp / 2; }
        if (temp == 1) { 
            printf("%d\n",i);}}
}
