#include <stdio.h>

/**
 * add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
double add(double a, double b)
{
    return (a + b);
}

/**
 * sub - subtracts b from a
 * @a: first number
 * @b: second number
 * Return: result
 */
double sub(double a, double b)
{
    return (a - b);
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
        /* Menu display */
        printf("Simple Calculator\n1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
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
        else if (choice == 1 || choice == 2)
        {
            printf("A: ");
            scanf("%lf", &a);
            printf("B: ");
            scanf("%lf", &b);
            
            if (choice == 1)
                printf("Result: %.0f\n", add(a, b));
            else
                printf("Result: %.0f\n", sub(a, b));
        }
        /* Choices 3 and 4 will be handled later */
    }
    return (0);
}
