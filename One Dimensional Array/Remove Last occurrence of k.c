#include <stdio.h>

int main() {
    int n,m,count=0;
    scanf("%d %d", &n,&m);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]); }
    for(int i=0; i<n; i++) {
            if(m==arr[i]) {
                count++;}
                if(count==2){
                for(int k=i; k<n-1; k++) {
                    arr[k] = arr[k+1]; }
                n--;   
                i--;   
                 break;}} 
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);}
}
