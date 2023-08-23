#include<stdio.h>
#include<stdlib.h>
#include"sqqueue.h"
int main(int argc, char const *argv[])
{
    sqqueue *sq;
    int i;
    sq=sqqueue_creat();
    for(i=0;i<5;i++)
    {
        sqqueue_frontin(sq,i);
    }
    for(i=0;i<3;i++)
    {
        sqqueue_rearin(sq,i);
    }
    sqqueue_show(sq);
    for(i=0;i<3;i++)
    {
        sqqueue_frontin(sq,i);
    }
    sqqueue_show(sq);
    for(i=0;i<2;i++)
    {
        printf("out %d\n",sqqueue_frontout(sq));
    }
    sqqueue_show(sq);
    for(i=0;i<2;i++)
    {
        printf("out %d\n",sqqueue_rearout(sq));
    }
    sqqueue_clear(sq);
    sqqueue_show(sq);
    sqqueue_free(sq);
    return 0;
}
