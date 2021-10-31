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
			printf("c = %d, c = NULL, isalnum%s, ft_isalnum:%s\n", c, TRUE(isalnum(c)), TRUE(ft_isalnum(c)));
		else if(c == 7)
			printf("c = %d, c = %s, isalnum:%s, ft_isalnum:%s\n", c, "\\a",TRUE( isalnum(c)), TRUE(ft_isalnum(c)));
		else if(c == 8)
			printf("c = %d, c = %s, isalnum:%s, ft_isalnum:%s\n", c, "\\b",TRUE( isalnum(c)), TRUE(ft_isalnum(c)));
		else if(c == 9)
			printf("c = %d, c = %s, isalnum:%s, ft_isalnum:%s\n", c, "\\t",TRUE( isalnum(c)), TRUE(ft_isalnum(c)));
		else if(c == 10)
			printf("c = %d, c = %s, isalnum:%s, ft_isalnum:%s\n", c, "\\n",TRUE( isalnum(c)), TRUE(ft_isalnum(c)));
		else if(c == 11)
			printf("c = %d, c = %s, isalnum:%s, ft_isalnum:%s\n", c, "\\v",TRUE( isalnum(c)), TRUE(ft_isalnum(c)));
		else if(c == 12)
			printf("c = %d, c = %s, isalnum:%s, ft_isalnum:%s\n", c, "\\f",TRUE( isalnum(c)), TRUE(ft_isalnum(c)));
		else if(c == 13)
			printf("c = %d, c = %s, isalnum:%s, ft_isalnum:%s\n", c, "\\r",TRUE( isalnum(c)), TRUE(ft_isalnum(c)));
		else
	        	printf("c = %d, c = %c, isalnum:%s, ft_isalnum:%s\n", c, c,TRUE( isalnum(c)), TRUE(ft_isalnum(c)));
		c++;
	}

	printf("Caracteres !\"#$%c%c'()*+,-./ \n",'%','&');
	c = 33;
	while(c <= 47)
	{
	        printf("c = %d, c = %c, isalnum:%s, ft_isalnum:%s\n", c, c,TRUE( isalnum(c)), TRUE(ft_isalnum(c)));
		c++;
	}

	printf("Caracteres 0123456789\n");
	c = 48;
	while(c <= 57)
	{
	        printf("c = %d, c = %c, isalnum:%s, ft_isalnum:%s\n", c, c,TRUE( isalnum(c)), TRUE(ft_isalnum(c)));
		c++;
	}

	printf("Caracteres :;<=>?@\n");
	c = 58;
	while(c <= 64)
	{
	        printf("c = %d, c = %c, isalnum:%s, ft_isalnum:%s\n", c, c,TRUE( isalnum(c)), TRUE(ft_isalnum(c)));
		c++;
	}
		
	printf("Caracteres de A até Z.\n");
	c = 65;
	while(c <= 90)
	{
	        printf("c = %d, c = %c, isalnum:%s, ft_isalnum:%s\n", c, c,TRUE( isalnum(c)), TRUE(ft_isalnum(c)));
		c++;
	}

	printf("Caracteres [\\]^_` \n");
	c = 91;
	while(c <= 96)
	{
	        printf("c = %d, c = %c, isalnum:%s, ft_isalnum:%s\n", c, c,TRUE( isalnum(c)), TRUE(ft_isalnum(c)));
		c++;
	}	
	printf("\n"); 

	printf("Caracteres de a até z.\n");
	c = 97;
	while(c <= 122)
	{
	        printf("c = %d, c = %c, isalnum:%s, ft_isalnum:%s\n", c, c,TRUE( isalnum(c)), TRUE(ft_isalnum(c)));
		c++;
	}

	printf("Caracteres {|}~ \n");
	c = 123;
	while(c <= 126)
	{
	        printf("c = %d, c = %c, isalnum:%s, ft_isalnum:%s\n", c, c,TRUE( isalnum(c)), TRUE(ft_isalnum(c)));
		c++;
	}

	printf("Caracter del \n");
	c = 127;
	while(c <= 127)
	{
	        printf("c = %d, c = %c, isalnum:%s, ft_isalnum:%s\n", c, c,TRUE( isalnum(c)), TRUE(ft_isalnum(c)));
		c++;
	}

	return (0); 
}	
