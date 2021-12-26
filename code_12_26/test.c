#include <stdio.h>
#include <assert.h>

/*size_t MyStrlen(char* str)
{
  assert(str);
  int count = 0;
  
  while(*str)
  {
    count++;
    str++;
  }
  return count;
}

int main()
{
  char arr[] = "abcdef";

  int ret = MyStrlen(arr);
  printf("%u\n",ret);
  
  return 0;
}*/


//写一个函数返回参数二进制中1的个数
//比如：15 0000 1111 4个1

int CountBitOne(int n)
{
  int count = 0;

  for(int i=0;i<32;i++)
  {
    if(((n>>i)&1) == 1)
      count++;  
  }

  return count;
}

int main()
{
  int n = 0;
  scanf("%d",&n);
  
  int ret = CountBitOne(n);
  printf("%d\n",ret);

  return 0;
}
