#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;

};

struct node * createnode(int data){
    struct node *n;
n=(struct node *)malloc(sizeof(struct node));
n->left=NULL;
n->right = NULL;
n->data=data;
return n;

}

int main(){
//constracting the rootnode
struct node * p = createnode(2);
struct node * p1 = createnode(1);
struct node * p2 = createnode(4);

//linking the node
p->left=p1;
p->right = p2;


return 0;
}



//     //root node 
// struct node *p;
// p=(struct node *)malloc(sizeof(struct node));
// p->left=NULL;
// p->right = NULL;
// p->data=2;

// //second node
// struct node *p1;
// p1=(struct node *)malloc(sizeof(struct node));
// p1->left=NULL;
// p1->right = NULL;
// p1->data=1;
// //third node
// struct node *p2;
// p2=(struct node *)malloc(sizeof(struct node));
// p2->left=NULL;
// p2->right = NULL;
// p2->data=4;
// //linking the node
// p->left=p1;
// p->right = p2;