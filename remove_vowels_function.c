#include <stdio.h>
#include <string.h>

void removeVowels(char str[])
{
    for(int i=0; str[i] != '\0'; )
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            for(int j=i; str[j] != '\0'; j++)
            {
                str[j] = str[j+1];
            }
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    char str[] = "sailesh";
    removeVowels(str);
    printf("%s", str);
    return 0;
}
