//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次
//编写一个函数找出这两个只出现一次的数字。
#include <stdio.h>

int main()
{
  int arr[] = {1,2,3,4,5,1,2,3,4,6};
  //找出5和6
  int ret = 0;
  int sz = sizeof(arr)/sizeof(arr[0]);
  
  for(int i=0;i<sz;i++)
  {
    ret ^= arr[i];  
  }
  
  int pos = 0;
  for(int i=0;i<32;i++)
  {
    if((ret>>i)&1 == 1) 
    { 
      pos = i;
      break;    
    }
  }

  int m = 0;
  int n = 0;
  for(int i=0;i<sz;i++)
  {
    if(((arr[i] >> pos) & 1) == 1)
    {
      m ^= arr[i];    
    }
    else 
    {
      n ^= arr[i];     
    }
  }

  printf("%d %d\n",m,n);

  return 0;
}
