#include <stdio.h>
#include <stdlib.h>
    struct node *f = NULL;
    struct node *r = NULL;
struct node
{
    int data;
    struct node *next;
};

void linked_list_traversal(struct node *ptr) {
    printf("printing the element of this linked list");
while(ptr != NULL) {

printf(" element :%d\n" ,ptr->data);
ptr = ptr ->next;

}
}
void enqueue( int value)
{

    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("queue is full");
    }
    else
    {
        n->next = NULL;
        n->data = value;
        if (f == NULL)
        {
            f = n;
           r= n ;
        }
        else
        {
            r->next = n;
            n = r;
        }
    }
}

int dequeue(){
    int val=-1;
      struct node *n = f;

    

      if(f==NULL){
        printf("queue is empty\n");

      }
      else{
f =f->next;
val = n->data;
free(n);


      }
      return val;
}
int main()
{
printf("dequeuing the element %d\n" ,dequeue());
enqueue(34);
enqueue(45);
printf("dequeuing the element %d\n" ,dequeue());
printf("dequeuing the element %d\n" ,dequeue());

    return 0;
}



