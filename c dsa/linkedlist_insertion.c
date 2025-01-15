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
struct node *insertatfirst(struct node *head, int data)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
    
}
struct node *insertatindex(struct node *head, int data, int index)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;

    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct node *insertatend(struct node *head, int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
ptr->data = data;
    struct node *p = head;
while (p->next != NULL) {

p = p->next;

}
p->next = ptr;
ptr->next = NULL;
return head;

}
struct node *insertafternode(struct node *head ,int data ,struct node * previousnode) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
ptr->data = data;
ptr->next =previousnode->next;

  previousnode->next = ptr;

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
    fourth->data = 4;
    fourth->next = NULL;
printf("linked list before insertion");


    linked_list_traversal(head);
    head = insertatindex(head,5,3);
printf("linked list after insertion");
    linked_list_traversal(head);

    return 0;
}
