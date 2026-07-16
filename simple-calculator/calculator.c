#include <stdio.h>

/**
 * main - entry point for the simple calculator
 *
 * Return: 0 on success
 */
int main(void)
{
    int choice;

    /* Display the menu once before entering the loop */
    printf("Simple Calculator\n");
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("0) Quit");

    /* Infinite loop to keep the program running */
    while (1)
    {
        printf("Choice: ");
        
        /* Reading user input using scanf */
        if (scanf("%d", &choice) != 1)
        {
            /* If input is not an integer, exit */
            break;
        }

        /* Check if the user wants to quit */
        if (choice == 0)
        {
            printf("Bye!\n");
            break;
        }

        /* 
         * Future step: 
         * Add your logic here to handle choices 1 to 4 
         */
    }

    return (0);
}
