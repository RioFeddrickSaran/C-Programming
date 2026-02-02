#include <stdio.h>
int main()
{
    int row,col,diag_1=0,diag_2=0;
    scanf("%d %d",&row,&col);
    int mat[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           scanf("%d",&mat[i][j]); 
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          if(mat[i]==mat[j]){
           diag_1+=mat[i][j];}
          } 
          diag_2+=mat[i][row-i-1];
    }
    printf("%d %d",diag_1,diag_2);
}