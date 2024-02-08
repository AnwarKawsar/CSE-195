#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    if(x==y){
        printf("equal\n");
    }else if(x>y){
        printf("%d is greater\n",x);
    }else{
        printf("%d is less\n",x);
        }
        return 0;
    

}