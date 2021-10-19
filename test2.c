#include <stdio.h>
#include <stdlib.h>
int g_val2;
int g_val1 = 10;

int main()
{
  printf("code adr:%p\n",main);
  const char *str = "hello.bit!";
  printf("read only:%p\n",str);
  printf("init g_val1:%p\n",&g_val1);
  printf("uninit g_val2:%p\n",&g_val2);
  
  char *p = (char*)malloc(sizeof(char));
  printf("heap adr:%p\n",p);
  printf("stack adr:%p\n",&str);
  printf("stack adr:%p\n",&p);
  
  free(p);
  p = NULL;
  return 0;
}
