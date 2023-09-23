#include<stdio.h>
int main() {
    int N;
    printf("Enter Number:\n");
    scanf("%d",&N);
    if (N>100)
    {
        printf("Enter a valid Number!!");
    
    }
    else if (N>89)
        {
            printf("Grade is A");
        }
    else if (N>79)
        {
            printf("Grade is B");
        }
    else if (N>69)
        {
            printf("Grade is C");
        }
    else if (N>59)
        {
            printf("Grade is D");
        }
    else if (N<60)
        {
            printf("Grade is F");
        }
    return 0;
    }
    