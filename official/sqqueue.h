typedef int datatype;
#define N 5

typedef struct 
{
    datatype data[N];
    int front,rear;
}sqqueue;

sqqueue *sqqueue_creat();
int sqqueue_clear(sqqueue *sq);
int sqqueue_en(sqqueue *sq,datatype data);
datatype sqqueue_out(sqqueue *sq);
int sqqueue_empty(sqqueue *sq);
int sqqueue_full(sqqueue *sq);
int sqqueue_show(sqqueue *sq);
int sqqueue_free(sqqueue *sq);
