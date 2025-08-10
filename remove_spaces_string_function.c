// Online C compiler to run C program online
#include <stdio.h>

void remove_spaces(char *p)
{
    char *j = p; // pointing to base address
    
    for(; *p!='\0';p++) // p also points to base address so no need of init
    {
        if(*p!=' ')
        {
            *j = *p; // copy content of p to j
            j++; // move to next index
        }
    }
    
    *j='\0'; // terminate it with null
    
}

int main() 
{
    
    char str[]="Hello World";
    remove_spaces(str);
    printf("Final string after removing spaces is %s",str);

    return 0;
}