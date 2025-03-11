#include <iostream>
using namespace std;
int findPattern(string text, string pattern) 
{
    int textLength = text.length();
    int patternLength = pattern.length();
    int maxSubstr = textLength - patternLength + 1;
    
    for (int i = 0; i < maxSubstr; i++)
    {
        int j;
        for (j = 0; j < patternLength; j++) 
        {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == patternLength) 
        {
            return i + 1; 
        }
    }
    return 0;
}
int main() {
    string text = "KanizFatema";
    string pattern = "izFat"; 
    int index = findPattern(text, pattern);
    if (index != 0)
        cout << "Pattern found at position: " << index << endl;
    else
        cout << "Pattern not found" << endl;

    cout << "Name: Kaniz Fatema" << endl << "ID: 20245103154" << endl;

    return 0;
}
