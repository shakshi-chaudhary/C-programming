#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    int mark, n, i;

    fptr = fopen("marks.txt", "w");


    if (fptr == NULL)
    {
        printf("Error: Could not create file.\n");
        return 1;
    }

    printf("Enter the number of students: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++)
    {
        printf("Enter marks for Student %d: ", i + 1);
        scanf("%d", &mark);


        fprintf(fptr, "%d\n", mark);
    }


    fclose(fptr);
    printf("\nMarks stored successfully.\n");


    fptr = fopen("marks.txt", "r");
    if (fptr == NULL)
    {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    printf("\n--- Retrieved Student Marks ---\n");
    int studentCount = 1;


    while (fscanf(fptr, "%d", &mark) == 1)
    {

        printf("Student %d: %d\n", studentCount++, mark);
    }


    fclose(fptr);
    printf("\nHardiAgola_25CE002\n");

    return 0;
}
