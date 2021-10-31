#include <stdio.h>
#include <string.h>
#include "../libft.h" 

int main ()
{
  char str[] = "This is a sample string";
  char * pch;
  pch=ft_strrchr(str,'s');
  printf ("Last occurence of 's' found at %ld \n",pch-str+1);
  return 0;
}
