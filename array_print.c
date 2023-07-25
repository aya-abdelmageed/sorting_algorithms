#include <stdlib.h>
#include <stdio.h>

/**
 * array_print - Prints an list of integers
 *
 * @list: The list to be printed
 * @length: Number of elements in @list
 */
void array_print(const int *list, size_t length)
{
    size_t i
    for ( i = 0; list && i < length; ++i)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list[i]);
    }
    printf("\n");
}
