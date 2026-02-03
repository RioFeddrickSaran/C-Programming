#include <stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int mat[row][col];
    int tran[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           scanf("%d",&mat[i][j]); 
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           tran[j][i]=mat[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           printf("%d ",tran[i][j]); 
        }
      printf("\n");}
}