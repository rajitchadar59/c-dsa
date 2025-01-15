#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *pre;
    struct node *next;
};
struct node *header = NULL;
void printlinked()
{

    struct node *ptr = header;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

void create_doubly(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->next = NULL;
    p->pre = NULL;
    p->data = data;
    header = p;
}
void insertion_head(int data) {

    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data=data;
    p->next = header;
    p->pre =NULL;
    header =p;


    
}
void insertion_tail(int data){
 struct node *p = (struct node *)malloc(sizeof(struct node));
 struct node*q = header;
 while(q->next !=NULL){
    q= q->next;

 }
q->next =p;
p->next = NULL;
p->pre = q;
p->data = data;



}
void nodeafternode(int data , int val){
struct node *p = (struct node *)malloc(sizeof(struct node));
 struct node*q = header;
 struct node *r = header->next;
 while(q->data != val && q->next != NULL){

 q= q->next;
 r= r->next;


 }
 q->next = p;
 p->data = data;
 p->next = r;
 p->pre = q;
 

}


int main()
{
    create_doubly(45);
    insertion_tail(88);
  insertion_tail(89);
    insertion_tail(85);

    printlinked();

    return 0;
}