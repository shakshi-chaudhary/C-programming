#include <stdio.h>

char books[5][50] =
{
    "too good to be true",
    "The Secret Diary",
    "Norwegian Wood",
    "Freedom",
    "Never Lie"
};
int available[5] = {1, 1, 1, 1, 1};
int totalBooks = 5;

void displayBooks()
{
    int i;
    printf("\n--- Available Books ---\n");
    for (i = 0; i < totalBooks; i++)
    {
        if (available[i] == 1)
        {
            printf("%d. %s\n", i + 1, books[i]);
        }
    }
}

int getTotalBooks()
{
    return totalBooks;
}

void borrowBook(char *bookName)
{
    int i, j, same, found = 0;

    for (i = 0; i < totalBooks; i++)
    {

        same = 1;
        for (j = 0; books[i][j] != '\0' && bookName[j] != '\0'; j++)
        {
            if (books[i][j] != bookName[j])
            {
                same = 0;
                break;
            }
        }

        if (same == 1 && available[i] == 1)
        {
            available[i] = 0;
            found = 1;
            printf("\nYou have borrowed \"%s\" successfully!\n", books[i]);
            break;
        }
    }

    if (found == 0)
    {
        printf("\nSorry, the book is not available or not found.\n");
    }
}

float calculateFine(int daysLate)
{
    float finePerDay = 2.0;
    float fine = finePerDay * daysLate;
    return fine;
}

int main()
{
    char bookName[50];
    int i = 0, days;
    char ch;
    float fine;

    displayBooks();

    printf("\nTotal number of books: %d\n", getTotalBooks());

    printf("\nEnter book name to borrow: ");
    i = 0;
    scanf("%[^\n]", bookName);
    scanf("%*c");
    borrowBook(bookName);

    printf("\nEnter number of days late for returning a book: ");
    scanf("%d", &days);

    fine = calculateFine(days);
    printf("Fine to be paid: ₹%.2f\n", fine);

    displayBooks();

    return 0;
}

