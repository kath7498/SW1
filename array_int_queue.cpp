#include "array_int_queue.h"
#include "assert.h"

Array_int_queue::Array_int_queue(int size) {
    queue = new int[size];
    max = size;
    rear = -1;
    front = 0;
}


int Array_int_queue::dequeue() {
    assert(front <= rear);
    int value = queue[front]; // gemmer tidligere front værdi for at kunne returne den.
    front = front + 1;
    return value;
}

bool Array_int_queue::empty() {
    return rear <= front;
}

bool Array_int_queue::full() {
    return rear == max - 1; 
}

Array_int_queue::~Array_int_queue() {
    delete[] queue;
}