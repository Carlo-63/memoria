#include <iostream>

struct CircularQueue {
    int* array;
    int front;
    int rear;
    int size;
    int count;
};

int* allocateArray(int n) {
    int* ptr = (int*) calloc(n, sizeof(int));

    return ptr;
}

bool isFull(CircularQueue* queue) {
    return queue->size == queue->count;
}

bool isEmpty(CircularQueue* queue) {
    return queue->count == 0;
}

bool isFrontAtEnd(CircularQueue* queue) {
    if (queue->front == queue->size - 1) {
        return true;
    }
    return false;
}

bool isRearAtEnd(CircularQueue* queue) {
    if (queue->rear == queue->size - 1) {
        return true;
    }
    return false;
}

void enqueue(CircularQueue* queue, int n) {
    if (!isFull(queue)) {
        queue->array[queue->rear] = n;
        queue->count++;

        if (isRearAtEnd(queue)) {
            queue->rear = 0;
        }
        else {
            queue->rear++;  
        }
    }
    else {
        std::cout<<"The queue is full!"<<std::endl;
    }
}

void dequeue(CircularQueue* queue) {
    if (!isEmpty(queue)) {
        queue->count--;

        if (isFrontAtEnd(queue)) {
            queue->front = 0;
        }
        else {
            queue->front++;
        }
    }
    else {
        std::cout<<"The queue is empty"<<std::endl;
    }
}

void printQueue(CircularQueue* queue) {
    if (!isEmpty(queue)) {
        int i = queue->front;
        int count = queue->count;

        for (int j = 0; j < count; j++) {
            std::cout << queue->array[i] << " ";
            
            if (i != queue->size -1) {
                i++;
            }
            else {
                i = 0;
            }
        }
        std::cout << "\n";
    }
    else {
        std::cout << "The queue is empty." << std::endl;
    }
}   

int main() {
    CircularQueue* queue = (CircularQueue*) malloc(sizeof(CircularQueue));
    int size;

    queue->front = 0;
    queue->rear = 0;
    queue->count = 0;

    std::cout<<"Size: ";
    std::cin>>size;

    if (size > 1) {
        queue->array = allocateArray(size);
        queue->size = size;

        // Da inserire qui l'interazione con l'utente
    
        free(queue->array);
    }

    free(queue);

    return 0;
}