#include <stdio.h>
int main()
{
    int row,col,max=-999,sum=0,mi=0;
    scanf("%d %d",&row,&col);
    int mat[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           scanf("%d",&mat[i][j]); 
        }
    }
    for(int i=0;i<row;i++){
        sum=0;
        for(int j=0;j<col;j++){
           sum+=mat[i][j];
           }
           if(sum>max){
             max=sum;
             mi=i;
           } }
    for(int i=0;i<col;i++){
         printf("%d ",mat[mi][i]);}
}