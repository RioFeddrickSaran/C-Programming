#include <stdio.h>
int main()
{
    int row,col,min;
    scanf("%d %d",&row,&col);
    int mat[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           scanf("%d",&mat[i][j]); 
        }
    }
    min=mat[0][0];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          if(mat[i][j]<min){
               min=mat[i][j];}
        }
    }
    printf("%d",min);
}