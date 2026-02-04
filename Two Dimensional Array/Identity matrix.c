#include <stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int mat[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           scanf("%d",&mat[i][j]);  } }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                if(mat[i][j]!=1){
                    printf("Not a identity matrix");
                    return 0; } }
            
            if(i!=j){
                if(mat[i][j]!=0){
                    printf("Not a identity matrix");
                    return 0; } } } }
    printf("Identity matrix");
}
