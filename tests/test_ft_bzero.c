#include <stdio.h>
#include <string.h>
#include "../libft.h" 
int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   //ft_memset(str,0,7);
   ft_bzero(str,7);
   printf("%s",&str[7]);
   
   return(0);
}
