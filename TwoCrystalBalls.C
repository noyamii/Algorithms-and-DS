#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define SIZE 20

int TwoCrystalBalls(bool a[], int size);

int main(int argc, char const *argv[])
{
    bool array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        if (i<17)
        {
            array[i] = false;
        }
        else
        {
            array[i] = true;
        }
    }


    int breakPoint = TwoCrystalBalls(array, SIZE);
    printf("Last ball broke on %d meters.\n", breakPoint);

}

int TwoCrystalBalls(bool a[], int size)
{

    int sr = floor(sqrt(size - 1));
    bool broke = false;
    int i = sr;

    // square root search
    while (!broke)
    {
        if (a[i])
        {
            broke = true;
            printf("One of them just broke!It was %d meters\n", i);
            continue;
        }
        else if (i >= size - 1)
        {
            printf("Both of the balls are still healthy!\n");
            return -1;
        }
        
        i += sr;
        if (i >= size){
            i = size - 1;
        }
    }
    
    // Linear Search
    for (int index = i - sr; index <= i ; index++)
    {
        printf("index is %d\n", index);
        if (a[index])
        {
            printf("oh noo\n");
            return index;
        }
    }

    printf("something is off!!!??\n");
    return -1;

}
