#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h" 
/*char **ft_split_words(char *str, char **s_list, char c)
{
    char *p;
    char **split;

    split = s_list;
    p = strchr (str, c);
    *s_list++ = str;
    while(p)
    {
        *p++ = '\0';
        *s_list++ = p;
        p = strchr(p+1,' ');
    }
    return (split);
}*/
int main()
{
  char str[] = "One two three four five";
  char **s_list;
  char **split;
  //char *p;
  int i = 0;
  s_list = malloc(sizeof(char **) * 5);
  /*split = s_list;
  p = strchr (str, ' ');
  *s_list++ = str;
  while(p)
  {
    *p++ = '\0';
    *s_list++ = p;
    p = strchr(p+1,' ');

  }*/
  split = ft_split(str, ' ');
  while(i < 5)
  {
    printf("%s\n",*split++);
    i++;
  }


}
