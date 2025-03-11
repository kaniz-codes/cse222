#include <stdio.h>
#include <string.h>
void computeArray(char pattern[], int patternLength, int array[]) 
{
    int length = 0, i = 1;
    array[0] = 0;

    while (i < patternLength) 
    {
        if (pattern[i] == pattern[length]) 
        {
            length++;
            array[i] = length;
            i++;
        } 
        else 
        {
            if (length != 0) 
             length = array[length - 1];
            
            else 
            {
                array[i] = 0;
                i++;
            }
        }
    }
}
int KMP_Search(char text[], char pattern[]) 
{
    int textLength = strlen(text);
    int patternLength = strlen(pattern);
    
    int array[patternLength];
    computeArray(pattern, patternLength, array);

    int i = 0, j = 0;

    while (i < textLength) {
        if (text[i] == pattern[j]) 
        {
            i++;
            j++;
        }
        if (j == patternLength) 
        {
            return i - j + 1;
        } else if (i < textLength && text[i] != pattern[j]) 
        {
            if (j != 0) {
                j = array[j - 1];
            } else {
                i++;
            }
        }
    }
    return 0;
}
int main() {
    char text[] = "KanizFatema";  
    char pattern[] = "Fat";       

    int index = KMP_Search(text, pattern);

    if (index != 0)
        printf("Pattern found at position: %d\n", index);
    else
        printf("Pattern not found\n");

    printf("Name: Kaniz Fatema\nID: 20245103154\n");
    return 0;
}
