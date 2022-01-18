#include <stdio.h>

/*int main()
{
  int value = 1024;
  //1024 0x00000400
  char condition = *((char*)(&value));
  if(condition) 
    value += 1;
    condition = *((char*)(&value));
  if(condition) 
    value += 1;
    condition = *((char*)(&value));
  printf("%d %d",value,condition);
  return 0;;
}*/

/*void func(char* p)
{
  p += 1;
}

int main()
{
  char s[] = {'1','2','3','4'};
  func(s);
  printf("%c\n",*s);

  return 0;
}*/
//自守数是指一个数的平方的尾数等于该数自身的自然数。请求出n（包括n)以内的自守数的个数
#include <math.h>
int main()
{
  int n = 0;
  while(~scanf("%d",&n))
  {
    long count = 0;
    int base = 10;
    for(int i=0;i<=n;i++)
    {
      long pow_n = pow(i,2);
      if(i == base)
      {
        base *= 10;//两位数的时候乘100，三位数的时候乘1000，以此类推...
      }
      if(pow_n % base == i)
      {
        count++;
      }    
    }
    printf("%d\n",count);  
  }
  return 0;
}
