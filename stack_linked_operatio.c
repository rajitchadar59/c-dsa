#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node **top)
{
    if (isEmpty(*top))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        struct Node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}
 int peek(struct Node *top  , int position)  {
struct Node *ptr  = top ;
for (int i =0 ; (i <position -1 && ptr != NULL) ; i++) {

    ptr = ptr->next;


}
if(ptr != NULL) {

    return ptr->data;

}
else {
    return -1;
    
}

 }

int main()
{
    struct Node *top = NULL;
   top = push(top ,5);


 top = push(top ,55);
  top = push(top ,45);
  int position =1;
int element = peek(top , position);

printf("%d" ,element);


    return 0;
}
