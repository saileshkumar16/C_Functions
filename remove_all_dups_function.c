#include <stdio.h>
#include <stdbool.h>

void remove_dups(char *p)
{
    bool seen[256]={false};
    
    unsigned char ch;
    int i,j=0;
    
    for( i=0; p[i]!='\0';i++)
    {
        ch =  (unsigned) p[i];
        
        if(!seen[ch])
        {
            seen[ch] = true;
            p[j] = ch;
            j++;
        }
    }
    
    p[j]='\0';
}

int main()
{
    char str[]="madam";
    
    remove_dups(str);
    
    printf("String after removing duplicates is %s",str);
    return 0;
}