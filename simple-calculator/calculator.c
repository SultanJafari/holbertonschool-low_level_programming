#include <stdio.h>

/**
 * main - entry point for the calculator
 *
 * Return: 0 on success
 */
int main(void)
{
    int choice;

    while (1)
    {
        /* Display Menu */
        printf("Simple Calculator\n");
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("0) Quit\n"); /* Added \n for cleaner output */
        printf("Choice: ");

        /* Read input */
        if (scanf("%d", &choice) != 1)
            break; /* Non-numeric input handling (as per requirements) */

        /* Check for valid choices */
        if (choice == 0)
        {
            printf("Bye!\n");
            break;
        }
        else if (choice < 0 || choice > 4)
        {
            printf("Invalid choice");
            /* The prompt shows "Invalid choiceChoice: ..." 
               so no newline here is intentional based on your requirement */
        }
        else
        {
            /* Placeholder for operations (Choice 1-4) */
            /* You will call your functions here later */
        }
    }

    return (0);
}
