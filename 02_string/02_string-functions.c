#include<stdio.h>
int main()
{
    char name[]="Kaniz";
    char name1[]="Fatema";
    strcat(name1, "");
    char name2[7]= {'K', 'A', 'N', 'I', 'Z', '\0'};
    char name3[20];
    char name4[7]= {'K', 'A', 'N', 'I', 'Z', '\0'};
    //char name3[]= {'K', 'A', 'N', 'I', 'Z'};
    printf("Input string %s\n", name);
    // Length of string
    printf("Length of string %d\n", strlen(name));
    // Size of string
    printf("Size of string %d\n", sizeof(name));

    // Concatenate Strings
    strcat(name, name1);
    printf("%s\n", name);

    //copy string
    strcpy(name3, name2);
    printf("%s\n", name3);

    // Compare Strings

    printf("%d\n", strcmp(name4,name3));
    
    //substring
    char name7[]="Kaniz";
    printf("%s\n",strstr(name7,"a"));
}

