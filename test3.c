#include <stdio.h>
int my_strlen(const char*str)
{
  if(*str == '\0')
  {
    return 0;  
  }
  return (1+my_strlen(str+1));
}
int main()
{
  int ret = my_strlen("abcd1234");
  printf("%d\n",ret);
  return 0;
}
