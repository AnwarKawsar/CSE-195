#include<stdio.h>
int main(){
    int a,b,result;
    float result_f;
    printf("Enter two numbers:\n");
    scanf("%d \n %d",a,b);
    //addition
    result=a+b;
    printf("Addition of two number: %d",result);
    //subtraction
    result=a-b;
    printf("Subtraction of two number: %d",result);
    //division
    result_f=a/b;
    printf("division of two number: %f",result);
    //multiplication
    result=a*b;
    printf("multiplication of two number: %d",result);
    //module
    result=a%b;
    printf("modual of two number: %d",result);
    return 0;
    }

