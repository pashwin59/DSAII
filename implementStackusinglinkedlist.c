#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

// Check if stack is empty
bool isEmpty() {
    return top == NULL;
}

// Push element onto stack
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;  // link the old top to new node
    top = newNode;        // make new node as top
    printf("%d pushed to stack\n", value);
}

// Pop element from stack
void pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Stack is empty\n");
        return;
    }
    
    struct Node* temp = top;     // store the current top node
    printf("%d popped from stack\n", top->data);
    top = top->next;             // move top to the next node
    free(temp);                  // free memory of the popped node
}

// Peek top element
int peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}

// Display stack
void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }
    
    printf("Stack elements:\n");
    struct Node* temp = top;
    while (temp != NULL) {
        printf("%d\n", temp->data);  // print current node's data
        temp = temp->next;            // move to next node
    }
}

// Main function to demonstrate stack operations
int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    
    printf("\n");
    display();
    
    printf("\nTop element: %d\n", peek());
    
    printf("\n");
    pop();
    pop();
    
    printf("\n");
    display();
    
    return 0;
}