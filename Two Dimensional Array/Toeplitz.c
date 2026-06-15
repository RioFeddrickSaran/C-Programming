#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int toe=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);}}
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            if(arr[i][j]!=arr[i+1][j+1]){
                toe=0;
                break;;}}
        if(toe==0){
            break;}}
    if(toe==1){
        printf("Yes");}
    else{
        printf("No");}}