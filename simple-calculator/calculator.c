#include <stdio.h>

/**
 * add - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the sum of a and b
 */
double add(double a, double b)
{
    return (a + b);
}

/**
 * main - entry point for the calculator
 *
 * Return: 0 on success
 */
int main(void)
{
    int choice;
    double a, b;

    while (1)
    {
        printf("Simple Calculator\n");
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("0) Quit\n");
        printf("Choice: ");

        if (scanf("%d", &choice) != 1)
            break;

        if (choice == 0)
        {
            printf("Bye!\n");
            break;
        }
        else if (choice < 0 || choice > 4)
        {
            printf("Invalid choice");
        }
        else if (choice == 1)
        {
            printf("A: ");
            scanf("%lf", &a);
            printf("B: ");
            scanf("%lf", &b);
            printf("Result: %.0f\n", add(a, b)); 
            /* Note: Use %.0f for integer-like results, or %.1f if you want decimals */
        }
        /* Add other choices (2, 3, 4) later */
    }
    return (0);
}
