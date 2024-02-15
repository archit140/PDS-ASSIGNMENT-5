#include<stdio.h>
int main()
{
    int dividend, divisor;
    printf("ENter divisor");
    scanf("%d",&dividend);
    printf("Enter Divisor");
    scanf("%d",&dividend);
    
    int quotient = 0;
    int remainder = dividend;

    while (remainder >= divisor) {
        remainder -= divisor;
        quotient++;
    }
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;

}