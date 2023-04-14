typedef struct {
    int* dys;
    int front;
    int rear;
    int k;
} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {
   MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
   obj->dys = (int*)malloc(sizeof(int)*(k+1));
   obj->front = obj->rear = 0;
   obj->k = k;
   return obj;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    return obj->front == obj->rear;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    return (obj->rear+1) % (obj->k+1) == obj->front;
}
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    // 如果队列满了，就不能再入队
    if (myCircularQueueIsFull(obj))
        return false;
    obj->dys[obj->rear] = value;
    obj->rear++;
    // 防止越界
    obj->rear %= (obj->k+1);
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
     // 如果队列为空，不能出队
    if (myCircularQueueIsEmpty(obj))
        return false;
    obj->front++;
    obj->front %= (obj->k+1);
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
        return -1;
    return obj->dys[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
        return -1;

    if (0 == obj->rear)
    {
        return obj->dys[obj->k];
    }
    return obj->dys[obj->rear-1];
}


void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->dys);
    free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);
 
 * bool param_2 = myCircularQueueDeQueue(obj);
 
 * int param_3 = myCircularQueueFront(obj);
 
 * int param_4 = myCircularQueueRear(obj);
 
 * bool param_5 = myCircularQueueIsEmpty(obj);
 
 * bool param_6 = myCircularQueueIsFull(obj);
 
 * myCircularQueueFree(obj);
*/