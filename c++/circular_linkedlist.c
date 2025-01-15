#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlisttraversal(struct node *head)
{

    struct node *ptr = head;

    do
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct node *insertatfirst(struct node *head, int data)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head->next;

    while (p->next != head)
    {
//p at the last node of circular linkedlist;

        p = p->next;
    }
p->next =ptr;
ptr->next =head;
head = ptr;

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
    fourth->next = head;
printf("before");
    linkedlisttraversal(head);
head= insertatfirst(head ,0);
printf("after\n");
    linkedlisttraversal(head);
    return 0;
}