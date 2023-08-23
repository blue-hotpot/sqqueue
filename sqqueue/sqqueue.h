typedef int data_t;
#define N 10
typedef struct sqqueue
{
    /* data */
    data_t data[N];
    int front,rear;//rear抚养；屁股；后面的
    int full,empty;
}sqqueue;


sqqueue *sqqueue_creat();
int sqqueue_free(sqqueue *sq);
int sqqueue_frontin(sqqueue *sq,data_t value);
data_t sqqueue_rearout(sqqueue *sq);
int sqqueue_clear(sqqueue *sq);
int sqqueue_empty(sqqueue *sq);
int sqqueue_full(sqqueue *sq);
int sqqueue_show(sqqueue *sq);
data_t sqqueue_frontout(sqqueue *sq);
int sqqueue_rearin(sqqueue *sq,data_t value);

