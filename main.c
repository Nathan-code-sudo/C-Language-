#include <stdio.h>
#include <stdlib.h>

int main()
{
    double Num1;
    double Num2;
    printf("Enter the First Number: ");
    scanf("%lf", &Num1);
    printf("Enter the Second Number: ");
    scanf("%lf", &Num2);

    printf("Answer: The Sum is            %lf \n", Num1 + Num2);
    printf("Answer: The Subtraction is    %lf \n", Num1 - Num2);
    printf("Answer: The Product is        %lf \n", Num1 * Num2);
    printf("Answer: The Qoutient is       %lf \n", Num1 / Num2);

    return 0;
}
