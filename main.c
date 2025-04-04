#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next; /* data */
} node;

int main(int argc, char *argv[]) {
    node *list = NULL;

    for (int i = 1; i < argc; i++) { // Corrected loop condition
        int number = atoi(argv[i]);
        printf("%s\n", argv[i]);

        node *n = malloc(sizeof(node));
        if (n == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            return 1; // Exit if memory allocation fails
        }
        
        n->number = number; // Set the number before using it
        n->next = NULL; // Initialize next to NULL

        // Insert the node in sorted order
        if (list == NULL || n->number < list->number) {
            n->next = list;
            list = n;
        } else {
            node *ptr = list;
            while (ptr->next != NULL && ptr->next->number < n->number) {
                ptr = ptr->next;
            }
            n->next = ptr->next;
            ptr->next = n;
        }
    }

    // Print the list
    node *ptr = list;
    while (ptr != NULL) {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }

    // Free the allocated memory
    ptr = list;
    while (ptr != NULL) {
        node *temp = ptr;
        ptr = ptr->next;
        free(temp);
    }

    return 0;
}