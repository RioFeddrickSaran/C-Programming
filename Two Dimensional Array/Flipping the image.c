#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int rev[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);}}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            rev[i][j]=arr[i][m-j-1];}}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         if(rev[i][j]==0){
            rev[i][j]=1;}
         else{
            rev[i][j]=0;}}}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",rev[i][j]);}
        printf("\n");}}