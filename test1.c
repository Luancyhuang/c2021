#include <stdio.h>
//返回小于N的质数个数
#include <math.h>

int is_prime(int num)
{
  for(int i=2;i<=sqrt(num);i++)
  {
    if(num%i == 0)
    {
      return 0;
    }  
  }
}

int main()
{
  int n = 0;
  while(~scanf("%d",&n))
  {
    int count = 0;
    for(int i=2;i<=n;i++)
    {
      if(is_prime(i))
      {
        count++;
      }    
    }
    printf("%d\n",count);    
  }

  return 0;
}
