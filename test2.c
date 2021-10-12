#include <stdio.h>
//指定比特位置0
//0&0 0&1 
//1&1 1&0 1和任何数按位与都不影响
#define clrbits(x,n) (x &= (~(1<<(n-1))))
void showbits(int x)
{
  int num = sizeof(x)*8-1;
  while(num>=0)
  {
    if(x&(1<<num))
    {
      printf("1");    
    }
    else
    {
      printf("0");    
    }
    num--;
  }
  printf("\n");
}
int main()
{
  int x = 0xFFFFFFFF;
  clrbits(x,1);
  clrbits(x,2);
  clrbits(x,3);
  clrbits(x,32);
  showbits(x);
  return 0;
}
