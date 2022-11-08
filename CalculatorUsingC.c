#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opr, check;
    int a, b;

UseAgain:
    while (1)
    {
        printf("\nWelcome to MyCalculator.....\n");

        // Input Operator to Perform Operation
        printf("\nEnter an Operator (+, -, *, /), If you want to Exit. Press x:\n");
        scanf(" %c", &opr);

        // Exit Calculator
        if (opr == 'x')
        {
            printf("Successfully Exit! Thanks For Using MyCalculator\n");
            exit(0);
        }

        // Input 1st Number
        printf("\nEnter First Number\n");
        scanf("%d", &a);

        // Input 2nd Number
        printf("\nEnter Second Number\n");
        scanf("%d", &b);

        printf("\n");

        // Differentiate Operator using Switch Case
        switch (opr)
        {

        // For Addition
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;

        // For Subtraction
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;

        // For Multiplication
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;

        // For Division
        case '/':
            if (b == 0)
            {
                printf("The second integer is zero. Can't Divide by zero.\n");
            }
            else
            {
                printf("%d / %d = %d\n", a, b, a / b);
            }
            break;

        // If operator doesn't match any case this will execute
        default:
            printf("\nWrong Input! Please Enter Valid Operator.\n");
        }

        // Using Calculator Again
        printf("\nDo You want to use Calaculator Again ?\n");
        printf("\nType 1 for Yes....or....Type Any Number except 1 for No...\n");
        scanf("%d", &check);

        // Check User want to use Calculator Again
        if (check == 1)
        {
            goto UseAgain;
        }
        else
            printf("Successfully Exit! Thanks For Using MyCalculator\n");
        return 0;
    }
}