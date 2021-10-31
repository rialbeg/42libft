#include "../libft.h"
#include <ctype.h> 
#include <stdio.h> 

int main(void)
{
	int	chr;

	chr = 65;
	while(chr <= 125)
	{
		printf("chr = %c, tolower:%c, ft_tolower:%c\n",chr, tolower(chr), ft_tolower(chr));
		chr++;
	}
	return (0);
	 
} 
