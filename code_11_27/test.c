#include <stdio.h>
//带有副作用的宏传参
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))

/*int Max(int x,int y)
{
  return x > y ? x : y; 
}

int main()
{
  int a = 5;
  int b = 8;
  //1.宏的参数是不计算直接替换进去的
  //2.替换进去后才参与计算
  //int m = MAX(a++,b++);

  //函数的参数是计算后再传进去的
  int m = Max(a++,b++);
  printf("%d\n",m);//8
  printf("%d\n",a);//6
  printf("%d\n",b);//9
  return 0;
}*/

//函数传参不能传类型
//宏可以传类型

/*#include <stdlib.h>
#define MALLOC(num,type) \
	(type*)malloc(num*sizeof(type))

int main()
{
  int* p = MALLOC(100,int);
  return 0;
}*/



int main()
{
  int arr[SZ];
  
  for(int i=0;i<SZ;i++)
  {
    arr[i] = i;  
  }
  
  for(int i=0;i<SZ;i++)
  {
    printf("%d ",arr[i]);
  }

  printf("\n");
  
  return 0;
}

