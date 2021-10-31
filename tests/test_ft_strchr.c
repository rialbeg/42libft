#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main (void)
{
  char str[] = "This is a sample string";
  char * pch;
  printf ("Looking for the 's' character in \"%s\"...\n",str);
  pch=ft_strchr(str,'s');
  printf("%s",pch);
  while (pch!=NULL)
  {
    printf ("found at %ld\n",pch-str+1);
    pch=ft_strchr(pch+1,'s');
  }
  return 0;
}
