#include "../libft.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>

int		main(void)
{
	printf("Testando strlen\n");
	assert(strlen("abc") == 3);
	assert(strlen("") == 0);
	assert(strlen("raclette") == 8);
	printf("strlen OK BABY !!\n");
	
	printf("Testando ft_strlen.\n");
	assert(ft_strlen("abc") == 3);
	assert(ft_strlen("") == 0);
	assert(ft_strlen("raclette") == 8);
	printf("ft_strlen OK BABY !!\n");
    return (0);
}
