#include <stdio.h>
int main(){
    int n,fmax,smax=-1,val;
    scanf("%d%d",&n,&fmax);
    for(int i=1;i<n;i++){
        scanf("%d",&val);
        if(val>fmax){
            smax=fmax;
            fmax=val;}
        else if(val>smax){
            smax=val;}}
    printf("%d %d",fmax,smax);}
