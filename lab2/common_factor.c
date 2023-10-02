#include<stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==b){
        printf("a");
    }else if(a%2==0 &&b%2==0){
        printf("2");
    }else if(a%3==0 &&b%3==0){
        printf("3");
    }else if(a%5==0 &&b%5==0){
        printf("5");
    }else if(a%7==0 &&b%7==0){
        printf("7");
    }else if(a%2==0 &&b%2==0){
        printf("2");
    }
       
}