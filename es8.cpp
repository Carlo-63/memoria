#include <iostream>

/* 
[    ] i = size - 1
[    ] i = 2
[    ] i = 1
[    ] i = 0 
*/
struct Stack {
    int* array;
    int top; // top = 0
    int size;
    int count;
};

int* allocateArray(int n) {
    int* ptr = (int*) calloc(n, sizeof(int));

    return ptr;
}

bool isFull(Stack* stack) {
    return stack->count == stack->size;
}

bool isEmpty(Stack* stack) {
    return stack->count == 0;
}

void push(Stack* stack, int n) {
    if (!isFull(stack)) {
        stack->array[stack->top] = n;
        stack->top++;
    }
    else {
        stack->array = (int*) realloc(stack->array, sizeof(int) * stack->size * 2);
        stack->size *= 2;
        stack->array[stack->top] = n;
    }
    stack->count++;
}

int pop(Stack* stack) {
    if (!isEmpty(stack)) {
        stack->top--;
        stack->count--;
        return stack->array[stack->top - 1];
    }
    else {
        std::cout<<"The stack is already empty"<<std::endl;
        return -1;
    }
}

int peek(Stack* stack) {
    if (!isEmpty(stack)) {
        return stack->array[stack->top - 1];
    }
    else {
        std::cout<<"The stack is empty"<<std::endl;
        return -1;
    }
}

void printStack(Stack* stack) {
    if (!isEmpty(stack)) {
        std::cout<<"Stack elements: "<<std::endl;

        for (int i = stack->top - 1; i >= 0; i--) {
            std::cout<<stack->array[i]<<std::endl;
        }
    } else {
        std::cout<<"The stack is empty"<<std::endl;
    }
}

int main() {
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    int size;

    std::cout<<"Size: ";
    std::cin>>size;

    if (size > 0) {
        stack->top = 0;
        stack->count = 0;
        stack->size = size;
        stack->array = allocateArray(size);

        // Da inserire qui l'interazione con l'utente

        free(stack->array);
    }

    free(stack);

    return 0;
}