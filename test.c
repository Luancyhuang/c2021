#include <stdio.h>
//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
int missingNumber(int *num,int numbersize)
{
  int x = 0;
  //0和[0,n]之间的数异或
  for(int i=0;i<=numbersize;i++)
  {
    x ^= i;
  }
  //再和数组中的值异或
  for(int i=0;i<numbersize;i++)
  {
    x ^= num[i];
  }
  return x;//返回x [0,N]缺省值
}
int main()
{
  int arr[10] = {0};
  
  for(int i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
  }
  int numbersize = sizeof(arr)/sizeof(arr[0]);
  printf("%d\n",missingNumber(arr,numbersize));
  return 0;
}
