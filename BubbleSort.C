#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int a[], int size);

int main(int argc, char const *argv[])
{
    int a[argc - 1];
    for (int i = 1; i < argc; i++)
    {
        a[i - 1] = atoi(argv[i]);
    }
    printf("before: {");
    for (int i = 0; i<argc -1; i++)
    {
        printf(" %d,", a[i]);
    }
    printf("}\n");
    bubbleSort(a, argc - 1);
    printf("after: {");
    for (int i = 0; i<argc -1; i++)
    {
        printf(" %d,", a[i]);
    }
    printf("}\n");
    return 0;
}


void bubbleSort(int a[], int size)
{
    int temp;

    for(int i = size - 1; i>=0; i--)
    {
        for(int j = 0; j <= i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

