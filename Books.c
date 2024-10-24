#include <stdio.h>
    struct book{
        char Book_title[40];
        char Book_author[40];
        int Publication_year;
        int ISBN;
        float Price;
    }Book;
int main() {
    printf("Enter Book_title:");
    scanf("%39s", Book.Book_title);
    printf("Enter Book_author:");
    scanf("%39s", Book.Book_author);
    printf("Enter Publication_year:");
    scanf("%d", &Book.Publication_year);
    printf("Enter ISBN:");
    scanf("%d", &Book.ISBN);
    printf("Enter Price:");
    scanf("%f", &Book.Price);

printf("\nBook name is: %s \n", Book.Book_title);
printf("Book author is: %s \n", Book.Book_author);
printf("Book publication year is: %d \n", Book.Publication_year);
printf("Book ISBN is: %d \n", Book.ISBN);
printf("Book price is: %2f\n", Book.Price);

	return 0;
}
