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
int peek(struct stack *sp ,int i){
if(sp->top-i+1 <0   ) {

    printf("invalid position");
    return-1;

}
else {
return sp->arr[sp->top-i+1];


}


}
int stack_top(struct stack *sp) {
    return sp->arr[sp->top];

}

int stack_botom(struct stack *sp) {
    return sp->arr[0];

}
int main(){
struct stack *s =(struct stack *)malloc(sizeof(struct stack));

s->size=10;
s->top = -1;
s->arr = (int *)malloc(s->size*sizeof(int));
printf("stack has been created succesfully\n");
puss(s ,42);
puss(s ,40);
puss(s ,41);
puss(s ,43);
puss(s ,45);
puss(s ,44);
puss(s ,4);
puss(s ,22);
puss(s ,20);
puss(s ,2);
for(int j =1 ; j<= s->top+1 ;j++ ) {
printf("the value at position %d is %d \n" ,j , peek(s ,j));
}
printf("the top element [2] =%d is\n",stack_top(s));
printf("the bottom element[42] = %d is",stack_botom(s));
return 0;
}