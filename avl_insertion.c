#include<stdio.h>
#include<stdlib.h>  
struct node {
int key;
struct node *left;
struct node *right;
int height;


};
int max(int a , int b){
 return  a > b ? a : b;

}
int getheight(struct node * n){
if(n == NULL){
    return 0 ;
   return n->height;
}

}

struct node *createnode(int key){
    struct node * n =(struct node *)malloc(sizeof(struct node));
    n->left =NULL;
    n->right=NULL;
    n->key=key;
    n->height = 1;

    return n;

}


int getbalancefactor(struct node * n){
  if(n ==NULL){
    return 0;

  }
  
   return getheight(n->left)-getheight(n->right);


}

struct node * rightrotate(struct node *y){
   struct node *x = y->left;
    struct node *t2 = x->right;
    x->right =y;
    y->left = t2;
    y->height = max(getheight(y->left) ,getheight(y->right))+1;
    x->height = max(getheight(x->left) ,getheight(x->right))+1;
     return x;

}
struct node * leftrotate(struct node *x){
   struct node *y = x->right;
    struct node *t2 = y->left;
    x->right =t2;
    y->left = x;
    y->height = max(getheight(y->left) ,getheight(y->right))+1;
    x->height = max(getheight(x->left) ,getheight(x->right))+1;
     return y;

}

struct node *insert(struct node *n , int key ){
if(n == NULL){
    return (createnode(key));

}
if(key < n->key){
    n->left = insert(n->left ,key);

}
else if (key > n->key){
    n->right = insert(n->right , key);
  

}
   return n;
   
   n->height = max( getheight(n->left) ,getheight(n->right)) +1;

  int bf =getbalancefactor(n);
   //left left case
   if (bf >1 && key < n ->left->key){
    return rightrotate(n);


   }
   //right right
     if (bf < -1 && key > n ->right->key){
  
      return leftrotate(n);


   }
   //left right
     if (bf > 1  && key > n ->left->key){
  
     n->left = leftrotate(n->left); // left rotate returns height 
      return rightrotate(n);

      

   }
        if (bf > -1 && key < n ->right->key){
  
      n->right = rightrotate(n->right);
      return leftrotate(n);



   }

 return n;


}
void preOrder(struct  node* root){
    if(root!=NULL){
        printf("%d ", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main(){
struct node *root =NULL;
root = insert(root , 1);
root = insert(root , 2);
root = insert(root , 3);
root = insert(root , 4);
root = insert(root , 5);
root = insert(root , 6);

preOrder(root);
return 0;
}
