#include<stdio.h>
#include"../official/sqqueue.h"
int main(int argc, char const *argv[])
{
    sqqueue *sq;
    datatype data;
    sq=sqqueue_creat();
    for(int i=0;i<5;i++)
    {
        sqqueue_en(sq,i);
    }
    sqqueue_show(sq);
    // for(int i=0;i<5;i++)
    // {
    //     data=sqqueue_out(sq);
    //     printf("out %d\n",data);
    // }
    // sqqueue_show(sq);
    // for(int i=0;i<5;i++)
    // {
    //     sqqueue_en(sq,i);
    // }
    sqqueue_clear(sq);
    sqqueue_show(sq);
    sqqueue_free(sq);
    return 0;
}
