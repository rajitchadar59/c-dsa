#include<stdio.h>
#include<stdlib.h>
struct node {

int data;
struct node *prenode;
struct node *next;


};
struct node * doubly_linked_list_traversal_linear(struct node *head) {
struct node*ptr = head;
while (ptr != NULL ){
printf("%d\n",ptr->data);
ptr = ptr->next;

}

return head;

}
struct node * doubly_linked_list_traversal_reverse(struct node *fourth) {
struct node*ptr = fourth;
while (ptr != NULL ){
printf("%d\n",ptr->data);
ptr = ptr->prenode;

}
return fourth;


}


int main() {

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;


    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

head->data = 45;
head ->next = second;
head->prenode = NULL;
second->data = 46;
second ->next = third;
second->prenode = head;
third->data = 47;
third ->next = fourth;
third->prenode =second;
fourth->data = 48;
fourth ->next = NULL;
fourth->prenode =third;
doubly_linked_list_traversal_linear(head);
printf("reverse\n");

doubly_linked_list_traversal_reverse(fourth);
    return 0;

}