#include <stdio.h>

//求N的阶乘n!

/*int main()
{
  int n = 0;
  scanf("%d",&n);
  int ret = 1;
  for(int i = 1; i <= n; i++)
  {
    ret *= i;  
  }
  printf("%d\n",ret);
  return 0;
}*/


//求1！+2！+3！+ ... +10!
/*int main()
{
  int i = 0;
  int j = 0;
  int sum = 0;
  int ret = 1;
  //1.暴力求解的方式效果低，有重复大量重复计算
  for(i = 1; i <= 3; i++)
  { 
    ret = 1;//每次循环后需要把ret 置为1
    for(j = 1; j <= i; j++)
    {
      ret *= j;    
    }
    sum += ret;
  }
  printf("%d\n",sum);
  //程序可以运行，但是结果是错误的-运行时错误
  //调试--一步步地执行代码，是不是按照我们期望的效果来走，如果不是按照我们期望效果在走，bug 就出现了！，
  return 0;
}*/

//方法2:5!=4!*5
//6! = 5!*6
//7! = 6!*7
//...
//n! = (n-1)!*n

/*int main()
{
  int n = 0;
  int sum = 0;
  int ret = 1;
  
  for(n = 1; n <= 3;n++)
  {
    ret *= n;
    sum += ret;  
  }
  printf("%d\n",sum);
  return 0;
}*/



int main()
{
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  //在有序数组arr 中找7
  //找到了打印下标，找不到打印：找不到
  
  int i = 0;
  int k = 7;
  int sz = sizeof(arr)/sizeof(arr[0]);

  for(i = 0;i < sz; i++)
  {
    if(arr[i] == k)
    {
      printf("找到了，下标是:%d",i);
      break;    
    }  
  }
  //i<sz;找到了
  //i == sz,没有找到
  if(i == sz)
  {
    printf("找不到\n");  
  }

  return 0;
}
















