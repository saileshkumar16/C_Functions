#include <stdio.h>

void remove_consecutive_duplicates(char *str)
{
    int i, j;

    for (i = 0; str[i] != '\0'; )    // note: i is incremennted only when no deletion occurs
    {
        if (str[i] == str[i + 1])
        {
            // shift left starting from position i+1
            for (j = i + 1; str[j] != '\0'; j++)
                str[j] = str[j + 1];
            // after shifting re check the same index without incrementing
        }
        else
        {
            i++; // only move forward if no duplicates  are found i.e unique elements
        }
    }
}

int main(void)
{
    char str[] = "aaab";
    remove_consecutive_duplicates(str);
    printf("After removal: %s\n", str); // prints: ab

    return 0;
}
