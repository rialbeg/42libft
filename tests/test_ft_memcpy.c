#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Helloo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, 4);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
