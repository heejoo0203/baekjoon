#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    
    if(a<=100&a>=90){
        printf("A");
    }
    if(a<90&a>=80){
        printf("B");
    }
    if(a<80&a>=70){
        printf("C");
    }
    if(a<70&a>=60){
        printf("D");
    }
    if(a<60){
        printf("F");
    }
    return 0;
}