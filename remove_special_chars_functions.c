#include <stdio.h>

void removeVowels(char *str)
{
    int i, j;
    for (i = 0; str[i] != '\0'; i++) 
    {
        // Check if current char is a vowel
        if(!(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'))
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
    char str[] = "sailesh!23";
    removeVowels(str);
    printf("After removing vowels: %s\n", str);
    return 0;
}
