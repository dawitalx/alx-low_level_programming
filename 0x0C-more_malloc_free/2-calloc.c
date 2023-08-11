#include <stdio.h>
#include <stdlib.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    if (nmemb == 0 || size == 0)
    {
        return NULL;
    }
    
    void *ptr = malloc(nmemb * size);
    
    if (ptr != NULL)
    {
        memset(ptr, 0, nmemb * size);
    }

    return (ptr);
}

int main(void) {
    unsigned int num_elements = 5;
    unsigned int element_size = sizeof(int);

    int *arr = _calloc(num_elements, element_size);

    if (arr != NULL) {
        for (unsigned int i = 0; i < num_elements; i++) {
            printf("%d ", arr[i]); // Print the elements (should be all zeros)
        }
        printf("\n");

        free(arr);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
