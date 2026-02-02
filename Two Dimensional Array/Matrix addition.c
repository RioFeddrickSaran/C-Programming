#include <stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int mat1[row][col];
    int mat2[row][col];
    int add[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           scanf("%d",&mat1[i][j]); 
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           scanf("%d",&mat2[i][j]); 
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           add[i][j]=mat1[i][j]+mat2[i][j];
           } }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           printf("%d ",add[i][j]); 
        }
        printf("\n");
    }
}