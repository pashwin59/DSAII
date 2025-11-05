#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *newnode, *temp;
   head = 0;

    int choice = 1;

    while (choice) {
        // Step 1: Create a new node
        newnode = (struct node*) malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        // Step 2: Input data for new node
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        // Step 3: If list is empty (head == NULL)
        if (head == NULL) {
            head = temp = newnode;
        } 
        else {
            temp->next = newnode; // link previous node to newnode
            temp = newnode;       // move temp to newnode
        }

        // Step 4: Ask user to continue
        printf("Do you want to continue (0, 1)? ");
        scanf("%d", &choice);
    }

    // Step 5: Print the linked list
    printf("\nLinked list elements are:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
