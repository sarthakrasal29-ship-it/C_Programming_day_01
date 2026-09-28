#include <stdio.h>

int main()
{
    float principal, rate, time, interest;

    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time: ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f\n", interest);

    return 0;
}
