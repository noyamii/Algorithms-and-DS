#include <stdio.h>
#include <stdlib.h>
#define SIZE 8


int LinearSearch(int* b, int a[], int size);


int main(int argc, char const *argv[]){
   int a[argc -1];
   for(int i = 1; i <argc; i++){
      a[i-1] = atoi(argv[i]);
   }

   int b;
   printf("\nWhat number are you looking for: ");
   scanf("%d", &b);
   int c = LinearSearch(&b, a, argc - 1);
   if (c == -1){
      printf("Couldn't find the desired number.\n");
   }
   return 0;
}



int LinearSearch(int* b, int a[], int size){
   for (int i=0; i < size; i++){
      printf("Looking at %d and the number is %d\n", i, a[i]);
      if (a[i] == *b){
      printf("found %d\n", a[i]);
         return a[i];
      }
   }
   return -1;
}
