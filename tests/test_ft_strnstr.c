#include <stdio.h> 
#include <string.h> 
#include "../libft.h"

int main(void)
{
	const char big[20] = "TutorialsPoint";
	const char little[10] = "Point";
	char *ret;

	//ret = ft_strnstr(big, little, 10);
	ret = ft_strnstr(big, little, 15);
	
	printf("Big string: %s\n",big);
	printf("Little string:%s\n",little);
	printf("The substring is: %s\n", ret);

	return (0);

} 
