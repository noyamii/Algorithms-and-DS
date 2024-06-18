#include <stdio.h>
#include <stdlib.h>


// not functional but understood the concept.


typedef struct node
{
    int digit;
    struct node  *next;
}nodeT;


nodeT *get(nodeT *head);
void append(nodeT *head);
nodeT *preppend(nodeT *head);
void insert(nodeT *head,int index);
void update(nodeT *head,int index);
void remove(nodeT *head,int index);


int main(int argc, char const *argv[])
{
    int running;
    nodeT *head;
    printf("First we need to creat our LINKED LIST. Do you wish to continue?\nPress any key to continue. (except zero)\n");
    scanf("%s", &running);
    if (running){
        head = (nodeT *)malloc(sizeof(nodeT));
        printf("What Number will it have?: \n");
        scanf("%d", &(head->digit));
        
    }
    while (running)
    {
        printf("\n1. To append.\n2. To get.\n3. To preppend.\nYour choice: \n");
        scanf("%d", &running);
        
        if (running == 1){
            append(head);
        }
        if (running == 2)
        {
            nodeT *node = get(head);
            printf("---------------------\nThe digit is: %d\nThe next address is: %d\n---------------------\n", node->digit, node->next);
        }
        if (running == 3)
        {
            head = preppend(head);
        }
        if (running == 4)
        {
            int index;
            printf("At what index: \n");
            scanf("%d", &index);
            printf("whuuuuu");
            if (index == 0)
            {
                head = head->next;
            }
            else
            {
                remove(head, index);
            }
            
        }
        
    }
    printf("Program Exited Successfully.\n");
    
    return 0;
}

void append(nodeT *head)
{
    nodeT *tail;
    tail = head;
    while (tail->next)
    {
        tail = tail->next;
    }
    tail->next = (nodeT *)malloc(sizeof(nodeT));
    tail = tail->next;
    printf("The number will be: \n");
    scanf("%d", &(tail->digit));
}

nodeT *get(nodeT *head)
{
    int index;
    nodeT *getNode;
    getNode = head;
    printf("At what index: \n");
    scanf("%d", &index);
    for (int i = 0; i < index; i++)
    {
        getNode = getNode->next;
    }
    return getNode;
}
nodeT *preppend(nodeT *head)
{
    nodeT *newHead = (nodeT *)malloc(sizeof(nodeT));
    printf("The number will be: \n");
    scanf("%d", &(newHead->digit));
    newHead->next = &(*head);
    return newHead;
}
void insert(nodeT *head,int index);
void update(nodeT *head,int index);
void remove(nodeT *head,int index){
    nodeT *getNode;
    getNode = head;
    printf("I'm here and ok");
    for (int i = 0; i < index - 1; i++)
    {
        if (getNode->next == NULL)
        {
            printf("your desired index is null.\n");
            return;
        }
        
        getNode = getNode->next;
    }
    printf("I'm here and still ok");
    // fuck you segmentation fault <3
    getNode->next = getNode->next->next;
}