/*ring buffer SIN count
test con push/pop
verifica lleno/vacío*/
#include <stdio.h>
#include <stdbool.h>
#define SIZE 4

typedef struct {
    int buffer[SIZE];
    int head;
    int tail;
}buffer_ring;

void init_buffer(buffer_ring *rb)// empty buffer
{
    rb->head=0;
    rb->tail=0;
}

bool push(buffer_ring *rb, int value)
{
    int next;
    next=(rb->head+1)%SIZE;
    if(next==rb->tail)
    {
        return 0;
    }

    rb->buffer[rb->head]=value;// escribe el valor en el arr
    rb->head=next;
    return 1;
}

bool pop(buffer_ring *rb, int *value)// va a leer 
{
    if(rb->tail==rb->head)
    {
        return 0;
    }
    *value=rb->buffer[rb->tail];
    rb->tail=(rb->tail+1)%SIZE;
    return 1;
}

int main(void)
{
    buffer_ring rb;
    init_buffer(&rb);
    push(&rb,30);
    push(&rb,40);
    push(&rb,50);
    push(&rb,100);

    int value;


    while(pop(&rb ,&value))
    {
        printf("%d\n", value);
    }

        return 0;
}