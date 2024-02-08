#include<stdio.h>
int main(){
    int number = 0;
    printf("Enter Yor Number: ");
    scanf("%d",&number);
    if(number >100||number <0){
        printf("Invalid number!!");
        return 0;
    }
    int num=number/10;
    switch (num)
    {
    case 10:
    case 9:
    case 8:
        printf("A+");
        break;
    case 7:
        printf("A");
        break;
    case 6:
        printf("B");
        break;
    case 5:
        printf("C");
        break;
    case 4:
        printf("D");
        break;
    default:
        printf("failed");
        break;
    }
    return 0;
}