#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size1, size2;
    char *summary;

    printf("Enter initial size: ");
    scanf("%d", &size1);
    getchar();

    summary = calloc(size1, 1);

    printf("Enter summary: ");
    fgets(summary, size1, stdin);
    printf("Initial: %s", summary);

    printf("\nEnter new size: ");
    scanf("%d", &size2);
    getchar();

    summary = realloc(summary, size2);

    printf("Enter updated summary: ");
    fgets(summary, size2, stdin);
    printf("Updated: %s", summary);

    free(summary);
    return 0;
}



