#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int binarySearch(int *b, int a[], int size);

int main(int argc, char const *argv[])
{

    int a[argc - 1];
    for (int i = 1; i < argc; i++)
    {
        a[i - 1] = atoi(argv[i]);
    }

    int b;
    printf("\nWhat number are you looking for: ");
    scanf("%d", &b);
    int c = binarySearch(&b, a, argc - 2);
    printf("The number was at %d.\n", c);
    return 0;
}

int binarySearch(int *b, int a[], int size)
{
    int low = 0;
    int high = size;
    int mid;
    while (low <= high)
    {
        mid = low + ((high - low) / 2);
        printf("currently at %d\n", mid);
        if (a[mid] == *b)
        {
            return mid;
        }
        else if (a[mid] < *b)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    

    return -1;
}
