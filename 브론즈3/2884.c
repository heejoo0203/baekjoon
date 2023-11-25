#include <stdio.h>

int main(){
    int H,M;
    scanf("%d%d",&H,&M);
    
    if((H>24||H<0)||(M>60||M<0)){
        printf("ERROR");
    }
    else{
    if(M>=45&&M<60){
        printf("%d %d",H,M-45);
    }
    if(M>=0&&M<45){
        if(H>0&&H<24){
        printf("%d %d",H-1,M-45+60);}
        if(H==0){
        printf("%d %d",H-1+24,M-45+60);}
        }
    }
    
    return 0;
}