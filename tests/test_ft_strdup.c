#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../libft.h" 

int main()
{
    char source[] = "GeeksForGeeks";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source);
 
    printf("%s", target);
    return 0;
}
