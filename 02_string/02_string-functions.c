#include <stdio.h>
#include <string.h>

int main() {
    // Initialize strings with proper sizes
    char name[20] = "Kaniz";
    char name1[] = "Fatema";
    char name2[7] = {'K', 'A', 'N', 'I', 'Z', '\0'};
    char name3[20];
    char name4[7] = {'K', 'A', 'N', 'I', 'Z', '\0'};
    char name5[20] = "Hello, ";

    // Display input string
    printf("Input string: %s\n", name);

    // String Length & Size
    printf("Length of string: %d\n", (int)strlen(name));
    printf("Size of string: %d\n", (int)sizeof(name));

    // Concatenate Strings Safely
    strncat(name, name1, sizeof(name) - strlen(name) - 1);
    printf("Concatenated String: %s\n", name);

    // Copy string safely
    strncpy(name3, name2, sizeof(name3) - 1);
    name3[sizeof(name3) - 1] = '\0'; 
    printf("Copied String: %s\n", name3);

    // Compare Strings
    printf("String Comparison: %d\n", strcmp(name4, name3));

    // Substring Search
    char name7[] = "Kaniz";
    char *sub = strstr(name7, "a");
    if (sub) {
        printf("Substring found: %s\n", sub);
    } else {
        printf("Substring not found\n");
    }

    // Find Character in String
    char *pos = strchr(name7, 'i');
    if (pos) 
    {
        printf("Character 'i' found at position: %ld\n", pos - name7);
    }

    return 0;
}
