// Online C compiler to run C program online
#include <stdio.h>

void remove_char(char *p, char ch)
{
    char *j = p;
    
    for( ; *p!='\0'; p++)
    {
        if(*p!=ch)
        {
            *j = *p;
            j++;
        }
        
        
    }
    
    *j='\0';

    
}

int main() 
{
    
    char str[]="banana";
    
    char ch ='a';
    remove_char(str,ch);
    printf("Final string after removing spaces is %s",str);

    return 0;
}