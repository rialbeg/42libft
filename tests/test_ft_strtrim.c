#include <stdio.h> 
#include "../libft.h"

int main()
{
    char * s = ft_strtrim("   xxxtriploxxx", " x");
    printf("%s",s);
    return (0);
}