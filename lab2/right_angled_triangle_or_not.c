#include<stdio.h>
int main(){
    int a,b,c,X;
    printf("Enter 3 sides:\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a*a+b*b==c*c || a*a+c*c==b*b ||b*b+c*c==a*a ){
    printf("\nThey are sides of a right-angled triangle.");
    }
    else{
        printf("\nThey are NOT sides of a right-angled triangle.");
    }
    return 0;

}