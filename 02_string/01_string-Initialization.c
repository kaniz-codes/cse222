#include <stdio.h>
#include <string.h>

int main()
{ 
    // Assigning a String Literal without Size
    char name[] = "Kaniz";
    printf("%s\n", name);

    // A String Literal with a Predefined Size
    char name1[10] = "Kaniz";
    printf("%s\n", name1);

    // Character by Character with Size 
    char name3[10] = {'K', 'a', 'n', 'i', 'z', '\0'};
    printf("%s\n", name3);
    
    // Character by Character without Size
    char name2[] = {'K', 'a', 'n', 'i', 'z', '\0'};
    printf("%s\n", name2);

    // Using Pointer
    char me[] = "Hello, Kaniz!";
    printf("%s\n", me);

    // Using fgets
    char experiment[50];
    printf("Experiment: ");
    fgets(experiment, sizeof(experiment), stdin);
    printf("Result of Experiment: %s\n", experiment);

    return 0;
}
