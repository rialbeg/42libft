#include "../libft.h"
#include <ctype.h> 
#include <stdio.h> 

int main(void)
{
	int	chr;

	chr = 65;
	while(chr <= 125)
	{
		printf("chr = %c, toupper:%c, ft_toupper:%c\n",chr, toupper(chr), ft_toupper(chr));
		chr++;
	}
	return (0);
	 
} 
