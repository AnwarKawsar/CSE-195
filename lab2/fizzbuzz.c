#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%3==0){
    printf("\nFIZZ");}
    if(x%5==0){
        printf("BUZZ");}
    return 0;
}