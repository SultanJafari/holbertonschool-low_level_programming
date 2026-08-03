#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int *array;
        int *leak;
        int uninitialized;

        array = malloc(3 * sizeof(int));
        if (array == NULL)
                return (1);

        array[0] = 10;
        array[1] = 20;
        array[2] = 30;

        printf("Invalid read: %d\n", array[3]);

        array[3] = 40;

        printf("Uninitialized value: %d\n", uninitialized);

        leak = malloc(sizeof(int));
        if (leak != NULL)
                *leak = 99;

        free(array);

        return (0);
}
