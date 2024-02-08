#include<stdio.h>
int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    
    int n=5,r=2;
    int nCr=factorial(n)/(factorial(r)*factorial(n-r));
    int nPr=factorial(n)/(factorial(n-r));
    printf("%d\n",nCr);
    printf("%d",nPr);

    return 0;


}