#include<stdio.h>
int main(){
    int num = 0;
    printf("Enter n: ");
    scanf("%d", &num);
    int sum_for=0;
    for(int i = 1; i <= num; i++){
        sum_for+=i;

    }
    printf("Sum (for):%d\n",sum_for);
    int sum_while=0;
    int j=1;
    while(j<=num){
        sum_while+=j;
        j++;
    }
    printf("Sum (while):%d \n",sum_while);

    int sum_do_while=0;
    int k=1;
    do{
        sum_do_while+=k;
        k++;
    }while (k<=num);
   printf("Sum (do_while):%d",sum_do_while);
   return 0;
    
}