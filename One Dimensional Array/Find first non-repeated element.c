#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);        
    int a[n];
    int i, j, count;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);}
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (i != j && a[i] == a[j]) {
                count = 1;  
                break; } }
        if (count == 0) {
            printf("First non-repeated element = %d\n", a[i]);
            return 0;}}
    printf("No non-repeated element\n");
}
