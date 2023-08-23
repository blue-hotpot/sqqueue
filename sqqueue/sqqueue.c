#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../sqqueue/sqqueue.h"
//
//

sqqueue *sqqueue_creat()
{
    sqqueue *sq;
    sq=(sqqueue *)malloc(sizeof(sqqueue));
    if(sq==NULL)
    {
        printf("creating is fail");
        return NULL;
    }
    memset(sq,0,sizeof(sqqueue));
    sq->front=sq->rear=sq->full=0;
    sq->empty=1;
    return sq;
}
//
//
int sqqueue_free(sqqueue *sq)
{
    if(sq==NULL)
    {
        printf("creating is fail");
        return 0;
    }
    free(sq);
    return 1;
}
//
//
int sqqueue_frontin(sqqueue *sq,data_t value)
{
    if(sq==NULL)
    {
        printf("creating is fail");
        return 0;
    }
    if(sq->full==1)
    {
        printf("the sqqueue is full");
        return 0;
    }
    else
    {
        sq->front=(++sq->front)%N;
        sq->data[sq->front]=value;
        sq->empty=0;
        if(sq->front==sq->rear)
        {
            sq->full=1;
        }
        return 1;
    }
}
//
//
data_t sqqueue_rearout(sqqueue *sq)
{
    if(sq==NULL)
    {
        printf("creating is fail\n");
        return 0;
    }
    if(sq->empty==1)
    {
        printf("the sqqueue is empty\n");
        return 0;
    }
    else
    {
        sq->rear=(++sq->rear)%N;
        sq->full=0;
         if(sq->front==sq->rear)
        {
            sq->empty=1;
        }
        return (sq->data[sq->rear]);
    }
   
}
//
//
int sqqueue_clear(sqqueue *sq)
{
    if(sq==NULL)
    {
        printf("creating is fail\n");
        return 0;
    }
    memset(sq,0,sizeof(sqqueue));
    sq->front=sq->rear=sq->full=0;
    sq->empty=1;
    return 1;
}
//
//
int sqqueue_empty(sqqueue *sq)
{
    if(sq==NULL)
    {
        printf("creating is fail\n");
        return 0;
    }
    return (sq->empty);    
}
//
//
int sqqueue_full(sqqueue *sq)
{
    if(sq==NULL)
    {
        printf("creating is fail\n");
        return 0;
    }
    return (sq->full);
}
//
//
int sqqueue_show(sqqueue *sq)
{
    for(int i=0;i<10;i++)
    {
        printf("data[%d]=%d\t",i,sq->data[i]);
    }
    return 1;
}
data_t sqqueue_frontout(sqqueue *sq)
{
    if(sq==NULL)
    {
        printf("creating is fail\n");
        return 0;
    }
    if(sq->empty==1)
    {
        printf("the sqqueue is empty");
        return 0;
    }
    else
    {
        int value;
        value=sq->data[sq->front];
        sq->front=(sq->front+9)%N;
        sq->full=0;
        if(sq->front==sq->rear)
        {
            sq->empty=1;
        }
        return value;
    }
}
int sqqueue_rearin(sqqueue *sq,data_t value)
{
    if(sq==NULL)
    {
        printf("creating is fail");
        return 0;
    }
    if(sq->full==1)
    {
        printf("the sqqueue is full");
        return 0;
    }
    else
    {
        sq->data[sq->rear]=value;
        sq->rear=(sq->rear+9)%N;
        sq->empty=0;
        if(sq->rear==sq->front)
        {
            sq->full=1;
        }
        return 1;
    }
}