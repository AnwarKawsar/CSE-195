#include<stdio.h>
int main(){
    int k=10;
    printf("k=%d",++k);
    k*=k;
    printf("k=%d",k++);
    k/=2;
    printf("k=%d",k);
    return 0;
}