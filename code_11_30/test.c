#include <stdio.h>
#include <stdlib.h>

typedef struct st_type
{
  int i;
  int a[];//柔性数组成员
}st;

int main()
{
  printf("%d\n",sizeof(st));
  //包含柔性数组成员的结构体使用，要配合malloc 这样的动态内存分配函数使用
  st* ps = (st*)malloc(sizeof(st)+10*sizeof(int));//可大可小
  if(ps == NULL)
  {
    printf("malloc fail\n");
    exit(-1);  
  }
  //如果开辟成功
  ps->i = 100;
  for(int i=0;i<10;i++)
  {
    ps->a[i] = i;  
  }

  for(int i=0;i<10;i++)
  {
    printf("%d ",ps->a[i]);
  }
  //a数组空间如果空间不够？希望调整为20个整型数据
  //扩容出来
  st* ptr = (st*)realloc(ps,sizeof(st)+20*sizeof(int));
  if(ptr == NULL)
  {
    printf("realloc fail\n");
    exit(-1);
  }
  //扩容成功后使用
  else
  {
    ps = ptr;
  }
  //释放
  free(ps);
  ps = NULL;

  return 0;
}
