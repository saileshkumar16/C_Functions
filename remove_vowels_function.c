#include <stdio.h>

void removeVowels(char *str)
{
    int i, j;
    for (i = 0; str[i] != '\0'; i++) 
    {
        // Check if current char is a vowel
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {

    
            for (j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
            i--; //recheck the same index
        }
    }
}

int main() {
    char str[] = "aec";
    removeVowels(str);
    printf("After removing vowels: %s\n", str);
    return 0;
}
