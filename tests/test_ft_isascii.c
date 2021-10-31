#include "../libft.h"
#include <ctype.h>
#include <stdio.h> 
#define TRUE(x) x ? "TRUE" : "FALSE"
int main(void)
{
	int	c;

	printf("Caracteres de controle:NUL (null),tab,space,etc\n");
	c = 0;
	while(c <= 32)
	{
		if(c == 0)
			printf("c = %d, c = NULL, isascii%s, ft_isascii:%s\n", c, TRUE(isascii(c)), TRUE(ft_isascii(c)));
		else if(c == 7)
			printf("c = %d, c = %s, isascii:%s, ft_isascii:%s\n", c, "\\a",TRUE( isascii(c)), TRUE(ft_isascii(c)));
		else if(c == 8)
			printf("c = %d, c = %s, isascii:%s, ft_isascii:%s\n", c, "\\b",TRUE( isascii(c)), TRUE(ft_isascii(c)));
		else if(c == 9)
			printf("c = %d, c = %s, isascii:%s, ft_isascii:%s\n", c, "\\t",TRUE( isascii(c)), TRUE(ft_isascii(c)));
		else if(c == 10)
			printf("c = %d, c = %s, isascii:%s, ft_isascii:%s\n", c, "\\n",TRUE( isascii(c)), TRUE(ft_isascii(c)));
		else if(c == 11)
			printf("c = %d, c = %s, isascii:%s, ft_isascii:%s\n", c, "\\v",TRUE( isascii(c)), TRUE(ft_isascii(c)));
		else if(c == 12)
			printf("c = %d, c = %s, isascii:%s, ft_isascii:%s\n", c, "\\f",TRUE( isascii(c)), TRUE(ft_isascii(c)));
		else if(c == 13)
			printf("c = %d, c = %s, isascii:%s, ft_isascii:%s\n", c, "\\r",TRUE( isascii(c)), TRUE(ft_isascii(c)));
		else
	        	printf("c = %d, c = %c, isascii:%s, ft_isascii:%s\n", c, c,TRUE( isascii(c)), TRUE(ft_isascii(c)));
		c++;
	}

	printf("Caracteres !\"#$%c%c'()*+,-./ \n",'%','&');
	c = 33;
	while(c <= 47)
	{
	        printf("c = %d, c = %c, isascii:%s, ft_isascii:%s\n", c, c,TRUE( isascii(c)), TRUE(ft_isascii(c)));
		c++;
	}

	printf("Caracteres 0123456789\n");
	c = 48;
	while(c <= 57)
	{
	        printf("c = %d, c = %c, isascii:%s, ft_isascii:%s\n", c, c,TRUE( isascii(c)), TRUE(ft_isascii(c)));
		c++;
	}

	printf("Caracteres :;<=>?@\n");
	c = 58;
	while(c <= 64)
	{
	        printf("c = %d, c = %c, isascii:%s, ft_isascii:%s\n", c, c,TRUE( isascii(c)), TRUE(ft_isascii(c)));
		c++;
	}
		
	printf("Caracteres de A até Z.\n");
	c = 65;
	while(c <= 90)
	{
	        printf("c = %d, c = %c, isascii:%s, ft_isascii:%s\n", c, c,TRUE( isascii(c)), TRUE(ft_isascii(c)));
		c++;
	}

	printf("Caracteres [\\]^_` \n");
	c = 91;
	while(c <= 96)
	{
	        printf("c = %d, c = %c, isascii:%s, ft_isascii:%s\n", c, c,TRUE( isascii(c)), TRUE(ft_isascii(c)));
		c++;
	}	
	printf("\n"); 

	printf("Caracteres de a até z.\n");
	c = 97;
	while(c <= 122)
	{
	        printf("c = %d, c = %c, isascii:%s, ft_isascii:%s\n", c, c,TRUE( isascii(c)), TRUE(ft_isascii(c)));
		c++;
	}

	printf("Caracteres {|}~ \n");
	c = 123;
	while(c <= 126)
	{
	        printf("c = %d, c = %c, isascii:%s, ft_isascii:%s\n", c, c,TRUE( isascii(c)), TRUE(ft_isascii(c)));
		c++;
	}

	printf("Caracter del \n");
	c = 127;
	while(c <= 127)
	{
	        printf("c = %d, c = %c, isascii:%s, ft_isascii:%s\n", c, c,TRUE( isascii(c)), TRUE(ft_isascii(c)));
		c++;
	}
	printf("c = %d, c = %c, isascii:%s, ft_isascii:%s\n", 128, 128,TRUE( isascii(c)), TRUE(ft_isascii(c)));
	return (0); 
}	
