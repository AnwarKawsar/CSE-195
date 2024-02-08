#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;

    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Calculate and display the gcd using the stdlib function
    int result = abs(gcd(num1, num2));
    printf("Greatest Common Divisor (gcd) of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
