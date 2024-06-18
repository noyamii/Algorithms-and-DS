#include <stdlib.h>
#include <stdio.h>
typedef struct node
{
    int var;
    struct node* previous;
    
} nodeT;

int length = 0;

nodeT *Push(nodeT*);
nodeT *Pop(nodeT*);

int main(int argc, char const *argv[])
{
    nodeT *head;
    int decision = 10000;
    while(decision)
    {
        printf("What decision: \n");
        scanf("%d", &decision);
        if(decision == 1)
        {
            head = Push(head);
        }
        if(decision == 2)
        {
            head = Pop(head);
        }
        if(length != 0)
        {
            printf("--------------\nCurrent head var %d.\nPrevious address %d.\n", head->var, head->previous);
        }


    }
    return 0;
}


nodeT *Push(nodeT* head)
{
    nodeT *newNode;
    length++;
    if (length == 1)
    {
        newNode = (nodeT *)malloc(sizeof(nodeT));
        printf("What digit: \n");
        scanf("%d", &(newNode->var));
        return newNode;
    }
    else
    {
        newNode = (nodeT *)malloc(sizeof(nodeT));
        printf("What digit: \n");
        scanf("%d", &(newNode->var));
        newNode->previous = &(*head);
        return newNode;
        
    }

}

nodeT *Pop(nodeT* head)
{
    length--;

    if (length == -1)
    {
        printf("There is nothing to pop!\n");
        length++;
        return 0;
    }
    else if (length == 0){
        head->previous = NULL;
        head->var = NULL;
        printf("stack cleaned.\n");
        return head;
    }
    else
    {
        return *(&(head->previous));
    }
    

}