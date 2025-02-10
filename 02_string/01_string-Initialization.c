#include <stdio.h>
#include <string.h>

int main()
{ 
    char name[] = "Kaniz";
    char name1[10] = "Kaniz";
    printf("%s\n", name);
    printf("%s\n", name1);

    // Character Array with Individual Characters
    char name2[] = {'K', 'A', 'N', 'I', 'Z', '\0'};
    char name3[10] = {'K', 'A', 'N', 'I', 'Z', '\0'};
    printf("%s\n", name2);
    printf("%s\n", name3);

    // Using Pointer
    char *me = "Hello, Kaniz!";
    printf("%s\n", me);

    // Using gets instead of gets
    char experiment[50];
    printf("Experiment: ");
    gets(experiment);
    printf("Result of Experiment: %s\n", experiment);

    // Using fgets instead of gets
    char experiment1[50];
    printf("Experiment No1: ");
    fgets(experiment1, sizeof(experiment1), stdin);
    printf("Result of Experiment No 1: %s\n", experiment1);

    return 0;
}
