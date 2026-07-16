#include <stdio.h>

/**
 * add - returns the sum
 * @a: first number
 * @b: second number
 * Return: sum
 */
double add(double a, double b) { return (a + b); }

/**
 * sub - returns the difference
 * @a: first number
 * @b: second number
 * Return: difference
 */
double sub(double a, double b) { return (a - b); }

/**
 * mul - returns the product
 * @a: first number
 * @b: second number
 * Return: product
 */
double mul(double a, double b) { return (a * b); }

/**
 * main - entry point for the calculator
 * Return: 0 on success
 */
int main(void)
{
    int choice;
    double a, b;

    while (1)
    {
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
        /* Handling choices 1, 2, and 3 together */
        else if (choice >= 1 && choice <= 3)
        {
            printf("A: ");
            scanf("%lf", &a);
            printf("B: ");
            scanf("%lf", &b);

            if (choice == 1)
                printf("Result: %.0f\n", add(a, b));
            else if (choice == 2)
                printf("Result: %.0f\n", sub(a, b));
            else
                printf("Result: %.0f\n", mul(a, b));
        }
        /* Choice 4 (Division) will be handled separately due to the division-by-zero check */
    }
    return (0);
}
