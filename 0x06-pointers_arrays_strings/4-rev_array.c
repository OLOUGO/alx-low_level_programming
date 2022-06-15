#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_array -
 * @a: Second string
 * @n: first string
 *
 * Return: My return
 */
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            _putchar(", ");
        }
        _putchar( a[i]);
        i++;
    }
    _putchar("\n");
}

void reverse_array(int *a, int n)
{
    int i;
    int j = n;

    int *aCopy;

    for (i = 0; i < n; i++)
    {
        j--;

        aCopy[i] = a[j];
        _putchar( aCopy[i]);
    }
}

int main()
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    // print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    // print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
