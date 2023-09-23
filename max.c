#include <stdio.h>

/*int main()

{
    int a, b, c, min, max, second;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    // find the minimum of the three
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    // find the maximum of the three
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    // find the second largest of the three
    second = (a == max) ? ((b > c) ? b : c) : ((b == max) ? ((a > c) ? a : c) : ((a > b) ? a : b));
    printf("The minimum is %d\n", min);
    printf("The maximum is %d\n", max);
    printf("The second largest is %d\n", second);
    return 0;
}
*/
int main(){
    int a,d,c,max,min,second;
    printf("Enter  3 integer:");
    scanf("%d%d%d",a,b,c);
    max=(a>b)?((a>c)?a:b):((b>c)?b:c);
    min=(a<b)?((a<c)?a:c):((b<c)?b:c);
    second=
}