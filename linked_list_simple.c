#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node  *next;
};
struct node *header = NULL;
void printlinked(){

struct node *ptr = header;
while(ptr != NULL) {
printf("%d\n" ,ptr->data);
ptr = ptr->next;


}

}

void create_list(int data){
struct node *p = (struct node*)malloc(sizeof(struct node));
p->data =data;
p->next = NULL;
header = p;

}

void insertatfirst(int  data){

struct node *p = (struct node*)malloc(sizeof(struct node));
p->next = header;
p->data = data;
header= p;

}


void insertatend(int data){
struct node *q =header;

struct node *p = (struct node*)malloc(sizeof(struct node));

while (q->next != NULL){
    q= q->next;

}
p->data =data;
p->next= NULL;
q->next =p;

}
 void insertatgivenval(int val){
struct node *p = (struct node*)malloc(sizeof(struct node));
struct node *q =header;
struct node *r;

while ((q->data < val )&& (q->next  != NULL)){
r= q;

q = q->next;



}
r->next = p;
p->next = q;
p->data = val;

 }


void insertxaftery(int y ,int x){
struct node *p = (struct node*)malloc(sizeof(struct node));
struct node *q =header;


while(q->data != y){
q=q->next;


}
p->next = q->next;
q->next = p;
p->data = x;



}


void deletionathead(){

    struct node *ptr =header;
    header = header->next;
    free(ptr);


}
void deleteatend(){

struct node *p =header;
struct node *q = header->next;

while(q->next != NULL){

    q=q->next;
    p=p->next;

}

p->next = NULL;
free(q);





}

void deleteatbetweeenxindatapart(int val){
struct node *ptr = header;
struct node *q = header->next;

while((q->data != val) &&(q->next != NULL) ){
q=q->next;

ptr=ptr->next;

}
if(q->data ==val){

    ptr->next =q->next;
free(q);

}




}








int main(){
create_list(45);
insertatend(55);insertatend(95);insertatend(105);
deleteatbetweeenxindatapart(95);




printlinked();


return 0;
}