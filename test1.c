#include <stdio.h>
int find_max_data(int num,...)
{
  va_list arg;
  va_start(arg,num);
  int max = va_arg(arg,int);
  
  for(int i=1;i<num;i++)
  {
    int curr = va_arg(arg,int);
    if(max<curr)
    {
      max = curr;
    }  
  }
  
  va_end(arg);
  return max;
}

int main()
{
  int max = find_max_data(5,11,22,33,44,55);
  printf("max=%d\n",max);

  return 0;
}
