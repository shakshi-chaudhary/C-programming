#include <stdio.h>

union Book {
    int accession_no;
    char title[50];
    char author[50];
    float price;
    int issued;
};

struct Library
 {
    int accession_no;
    char title[50];
    char author[50];
    float price;
    int issued;
};

int main()
{
    struct Library b;

    printf("Enter Accession Number: ");
    scanf("%d", &b.accession_no);

    printf("Enter Title: ");
    scanf(" %[^\n]", b.title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);

    printf("Enter Price: ");
    scanf("%f", &b.price);

    printf("Is the book issued? (1 = Yes, 0 = No): ");
    scanf("%d", &b.issued);

    printf("\n--- Book Details ---\n");
    printf("Accession No: %d\n", b.accession_no);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
    printf("Status: %s\n", (b.issued == 1) ? "Issued" : "Available");

    return 0;
}
