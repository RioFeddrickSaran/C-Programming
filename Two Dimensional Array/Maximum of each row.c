#include <stdio.h>
int main()
{
    int row,col,max=0;
    scanf("%d %d",&row,&col);
    int mat[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           scanf("%d",&mat[i][j]); 
        }
    }
    for(int i=0;i<row;i++){
      max=-999;
        for(int j=0;j<col;j++){
          if(mat[i][j]>max){
               max=mat[i][j];}
           }
      printf("%d\n",max);
    }
}