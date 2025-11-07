#include <stdio.h>

int main() {
    char note1[200], note2[200], reverse[200], copyNote[200], concat[400];
    int i, j, len = 0;

    printf("Enter first note: ");
    scanf("%s", &note1);
    for (i = 0; note1[i] != '\0'; i++) {
        len++;
    }
    printf("\n1. Length of note: %d", len);

    for (i = len - 1, j = 0; i >= 0; i--, j++) {
        reverse[j] = note1[i];
    }
    reverse[j] = '\0';
    printf("\n2. Reversed note: %s\n", reverse);

    printf("\nEnter second note: ");

    scanf("%s", &note2);

    int same = 1;
    for (i = 0; note1[i] != '\0' || note2[i] != '\0'; i++) {
        if (note1[i] != note2[i]) {
            same = 0;
            break;
        }
    }
    if (same == 1)
        printf("\n3. Notes are SAME");
    else
        printf("\n3. Notes are DIFFERENT");

    for (i = 0; note1[i] != '\0'; i++) {
        copyNote[i] = note1[i];
    }
    copyNote[i] = '\0';
    printf("\n4. Copied note: %s", copyNote);

    i = 0;
    while (note1[i] != '\0') {
        concat[i] = note1[i];
        i++;
    }
    j = 0;
    while (note2[j] != '\0') {
        concat[i] = note2[j];
        i++;
        j++;
    }
    concat[i] = '\0';
    printf("\n5. Concatenated note: %s", concat);

    for (i = 0; note1[i] != '\0'; i++) {
        if (note1[i] >= 'a' && note1[i] <= 'z') {
            note1[i] = note1[i] - 32;
        }
    }
    printf("\n6. Uppercase note: %s", note1);

    for (i = 0; note1[i] != '\0'; i++) {
        if (note1[i] >= 'A' && note1[i] <= 'Z') {
            note1[i] = note1[i] + 32;
        }
    }
    printf("\n7. Lowercase note: %s", note1);

    if(note1[0] >= 'a' && note1[0] <='z')
    {
        note1[0]= note1[0] - 32;
    }
    printf("\n8. Capitalized note: %s\n", note1);


    return 0;
}
