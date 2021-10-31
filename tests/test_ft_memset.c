#include <stdio.h>
#include <string.h>
#include "../libft.h" 
int main () {
   char str[50];
   

   strcpy(str,"This is string.h library function");
   printf("String que sera usada de teste.\n");
   puts(str);

   printf("Aplicando ft_memset(str,'$',7)\n");
   ft_memset(str,'$',7);
   puts(str);


   strcpy(str,"This is string.h library function");
   printf("Aplicando memset(str,'$',7)\n");
   memset(str,'$',7);
   puts(str);
   return(0);
}
