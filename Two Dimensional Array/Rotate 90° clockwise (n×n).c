#include <stdio.h>
int main()
{
    int row,col,temp=0;
    scanf("%d %d",&row,&col);
    int mat[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           scanf("%d",&mat[i][j]);  } }
            for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            temp=mat[j][i];
           mat[j][i]=mat[i][j];
           mat[i][j]=temp; }}
    for(int i=0;i<row;i++){
        for(int j=0;j<row/2;j++){
            temp=mat[i][j];
           mat[i][j]=mat[i][row-j-1];
           mat[i][row-j-1]=temp; }}
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           printf("%d ",mat[i][j]);}
       printf("\n");}
}