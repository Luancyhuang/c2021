#include <stdio.h>
#include <unistd.h>
//int main()
//{
//  int index = 0;
//  const char *label = "|/-\\";
//  while(1)
//  {
//    index %= 4;
//    printf("[%c]\r\n",label[index]);
//    index++;
//    sleep(1);
//  }
//  return 0;
//}
//
//倒计时功能
int main()
{
  int i = 10;
  for(;i>=0;i--)
  {
    printf("[%2d]\n",i);
    sleep(1);
  }
  return 0;
}

