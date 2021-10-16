#include "test.h"
#define TOSTR(s) #s
int main()
{
//#ifdef M
//#pragma message("M宏已经被定义了"）
//#endif
 // printf("%s %d\n",__FILE__,__LINE__);
//#line 60 "hehe.c"
 // printf("%s %d\n",__FILE__,__LINE__);
  //printf("hello bit\n");
  //printf("hello bit""hello,world\n");
  //const char *str = "hello,bit""hello,world\n";
  //printf(str);
  //printf("PI:"STR(3.1415926)"\n");
  char str[64] = {0};
  strcpy(str,TOSTR(12345));
  printf("%s\n",str);
  return 0;
}
