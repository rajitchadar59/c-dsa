#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linked_list_traversal(struct node *ptr)
{
    while (ptr != NULL)
    {

        printf(" element :%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *deletefirstelement(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct node * deleteatindex(struct node *head, int index)
{

    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {

        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);

    return head;
}
struct node * deleteatend(struct node *head)
{

    struct node *p = head;
    struct node *q = head->next;
while (q->next != NULL) {
p =p->next;
q= q->next;



}
p->next = NULL;
free(q);


    return head;
}
struct node * deleteatgivenvalue(struct node *head, int value)
{

    struct node *p = head;
    struct node *q = head->next;
while (q->data != value && q->data != NULL) {

p= p->next;
q=q->next;



}
if (q->data == value) {

p->next = q->next;
free(q);


}

    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // allocate memory for linked list in heap;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    // link first and second nodes;

    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 45;
    third->next = fourth;
    fourth->data = 10;
    fourth->next = NULL;
    printf("linked list before deletion\n");
    linked_list_traversal(head);
 
head = deleteatgivenvalue(head ,45);
printf("linked list after deletion\n");
    linked_list_traversal(head);
    return 0;
}
