#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);}}
    int x;
    scanf("%d",&x);
    int r,c;
    for(int i=0;i<n;i++){
        int found=0;
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
            int t=(i<j)?i:j;
            r=i-t;
            c=j-t;
            break;
            found=1;}}
        if(found) break;}
    while(r<n && c<m){
        printf("%d ",arr[r][c]);
        r++;
        c++;}
}