// Q150: Use pointer to struct to modify and display data using -> operator.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char title[100];
    float price;
} Book;
int main() {
    Book *book = (Book *)malloc(sizeof(Book));
    if (book == NULL) {
        perror("Failed to allocate memory");
        return EXIT_FAILURE;
    }

    // Reading book details
    printf("Enter book title: ");
    // Clear the input buffer before fgets
    while (getchar() != '\n');
    fgets(book->title, sizeof(book->title), stdin);
    
    printf("Enter book price: ");
    scanf("%f", &book->price);

    // Displaying book details
    printf("\nBook Details:\n");
    printf("Title: %s", book->title); // fgets includes newline
    printf("Price: %.2f\n", book->price);

    // Freeing the allocated memory
    free(book);

    return EXIT_SUCCESS;    
}
