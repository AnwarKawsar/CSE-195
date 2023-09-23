#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter 3 numbers:");
    scanf("\n%d\n%d\n%d",&x,&y,&z);
    if(x<y && x<z){
        printf("%d:is the smallest.",x);
    }else if (y<x&&y<z)
    {
        printf("%d:is the smallest.",y); 
    }else{
        printf("%d:is the smallest.",z);
    }
    
    return 0;
}