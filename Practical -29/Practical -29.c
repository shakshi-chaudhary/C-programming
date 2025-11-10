#include <stdio.h>
#include <string.h>

#define MAX 10

struct Coach
{
    char name[50];
    int age;
    int experience;
};

struct Team
 {
    char teamName[50];
    char sportType[30];
    struct Coach coach;
};

int main() {
    struct Team t[MAX];
    int n = 0, choice;
    char search[50];

    do {
        printf("\n--- Sports Team Management ---\n");
        printf("1. Add Team\n2. Search Team\n3. Display All\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
            case 1:
                if (n < MAX)
                    {
                    printf("Enter Team Name: ");
                    gets(t[n].teamName);
                    printf("Enter Sport Type: ");
                    gets(t[n].sportType);
                    printf("Enter Coach Name: ");
                    gets(t[n].coach.name);
                    printf("Enter Coach Age: ");
                    scanf("%d", &t[n].coach.age);
                    printf("Enter Coach Experience (years): ");
                    scanf("%d", &t[n].coach.experience);
                    getchar();
                    n++;
                } else {
                    printf("Team list full!\n");
                }
                break;

            case 2:
                printf("Enter Team Name to Search: ");
                gets(search);
                for (int i = 0; i < n; i++)
                    {
                    if (strcmp(t[i].teamName, search) == 0)
                     {
                        printf("\nTeam: %s\nSport: %s\nCoach: %s\nAge: %d\nExperience: %d years\n",
                               t[i].teamName, t[i].sportType, t[i].coach.name,
                               t[i].coach.age, t[i].coach.experience);
                    }
                }
                break;

            case 3:
                for (int i = 0; i < n; i++)
                    {
                    printf("\nTeam: %s\nSport: %s\nCoach: %s\nAge: %d\nExperience: %d years\n",
                           t[i].teamName, t[i].sportType, t[i].coach.name,
                           t[i].coach.age, t[i].coach.experience);
                }
                break;
        }
    } while (choice != 4);

    printf("\nShakshiChaudhary_25CE014\n");
    return 0;
}


