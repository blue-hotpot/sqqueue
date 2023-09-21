#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../official/sqqueue.h"

sqqueue *sqqueue_creat()
{
    sqqueue *sq;
    sq=(sqqueue *)malloc(sizeof(sqqueue));
    if(sq==NULL)
    {
        printf("the queue is empty\n");
        return NULL;
    }
    sq->front=sq->rear=0;
    memset(sq,0,sizeof(sqqueue));
    sq->front=sq->rear=0;
    return sq;
}
int sqqueue_clear(sqqueue *sq)
{
    if(sq==NULL)
    {
        printf("the queue is empty\n");
        return 0;
    }
    memset(sq,0,sizeof(sqqueue));
    return 1;
}
//队尾进去，队头出
int sqqueue_en(sqqueue *sq,datatype data)
{
    if(sq==NULL)
    {
        printf("the queue is empty\n");
        return 0;
    }
    if(sq->front!=(sq->rear+1)%N)
    {
        sq->data[sq->rear]=data;
        sq->rear=(sq->rear+1)%N;
    }
    return 0;
}
datatype sqqueue_out(sqqueue *sq)
{
    datatype data=-1;
    if(sq==NULL)
    {
        printf("the queue is empty\n");
        return 0;
    }
    if((sq->front)!=(sq->rear))
    {
        data=sq->data[sq->front];
        sq->front=(sq->front+1)%N;
    }
    return data;
}
int sqqueue_empty(sqqueue *sq)
{
    return (sq->rear==sq->front? 1:0);
}
int sqqueue_full(sqqueue *sq)
{
    if(sq->front==(sq->rear+1)%N)
    {
        printf("the queue is full");
        return 1;
    }
    return 0;
}
int sqqueue_show(sqqueue *sq)
{
    printf("the queue is ");
    for(int i=0;i<N;i++)
    {
        printf("%d,",sq->data[i]);
    }
    printf("\n");
}
int sqqueue_free(sqqueue *sq)
{
    free(sq);
    return 0;
}
