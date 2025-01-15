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
void preorder(struct node *root){
if(root != NULL){
printf("%d" ,root->data);
preorder(root->left);
preorder(root->right);


}
 


}

void postorder(struct node *root){
if(root != NULL){

    postorder(root->left);
postorder(root->right);
printf("%d" ,root->data);



}
  
}

void inorder(struct node *root){
if(root != NULL){

inorder(root->left);
printf("%d" ,root->data);
inorder(root->right);


}


}
int isBST(struct node *root){
 static  struct node *pre = NULL;

if(root != NULL){
    if(!isBST(root->left)){
         return 0;
     
     }
    if(pre != NULL && root->data <= pre->data){
        return 0;

    }
     pre =root;
     return isBST(root->right);


}
else{
    return 1;

}

}

struct node * search(struct node* root , int key){
if(root==NULL){
    return NULL;

}
else if(key == root->data){
    return root;

}
else if(root->data > key){
    return search(root->left,key);
}
else {
    return search(root->right,key);

}
}
int main(){
//constracting the rootnode
struct node * p =  createnode(5);
struct node * p1 = createnode(3);
struct node * p2 = createnode(6);
struct node * p3= createnode(1);
struct node * p4= createnode(4);

//linking the node
p->left=p1;
p->right = p2;
p1->left =p3;
p1->right=p4;


struct node *n = search(p ,4);
if(n != NULL){
printf("found : %d" ,n->data);
}
else{
  printf( " not found! ");  
}
return 0;
}