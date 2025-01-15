#include<stdio.h>
#include<stdlib.h>
struct stack {
int  size;
int top;
int *arr;

};
int is_full(struct stack *ptr) {
if(ptr->top == ptr->size-1) {
return -1;

}
else {
    return 0;

}


}

int is_empty(struct stack *ptr) {
if(ptr->top == -1) {
return -1;

}
else {
    return 0;
    
}



}
void puss( struct stack *ptr ,int value ) {
if(is_full(ptr)){
    printf("stack overflow %d can not push" ,value);

}
else {
ptr->top ++;
ptr->arr[ptr->top] =value;
printf("the is element %d is pused \n" ,value);

}



}
int pop( struct stack *ptr  ) {
if(is_empty(ptr)){
    printf("stack underflow %d can not push");
return -1;

}
else {
int val = ptr->arr[ptr->top];
ptr->top =ptr->top-1;
return val;

}



}

int main(){
struct stack *s  =(struct stack *)malloc(sizeof(struct stack));

s->size=10;
s->top = -1;
s->arr = (int *)malloc(s->size*sizeof(int));
printf("stack has been created succesfully\n");



puss(s,45);
puss(s,4);
printf("the element %d is  poped\n" ,pop(s));


printf("the element %d is  poped" ,pop(s));

return 0;
}