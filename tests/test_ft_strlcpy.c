/* strncpy example */
#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main ()
{
  char str1[]= "To be or not to be";
  char str2[40];
  char str3[40];

  /* copy to sized buffer (overflow safe): */
  ft_strlcpy ( str2, str1, sizeof(str2) );

  /* partial copy (only 5 chars): */
  ft_strlcpy ( str3, str2, 7 );

  puts (str1);
  puts (str2);
  puts (str3);

  return 0;
}
