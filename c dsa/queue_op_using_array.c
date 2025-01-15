#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isempty(struct queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct queue *q, int val)
{
    if (isfull(q))
    {
        printf("queue is full");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}
int dequeue(struct queue *q){
 int a =-1;

    if(isempty(q)){
        printf("the queue is empty");

    }
    else{
     q->f++;

    a= q->arr[q->f];
    }
return a;

}
int main()
{
    struct queue q;
    q.size = 4;
    q.f = -1;
    q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));


    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 15);
    enqueue(&q, 15);
    printf("the dequeue element %d\n" ,dequeue(&q));
    printf("the dequeue element %d\n" ,dequeue(&q));
    printf("the dequeue element %d\n" ,dequeue(&q));
    printf("the dequeue element %d\n" ,dequeue(&q));
        enqueue(&q, 15);
    return 0;
}