#include <stdio.h>

int main()
{  
  //short a[10] = {0};
  //short *p = a;
  //short *q = &a[9];
  //printf("%d\n",q-p);//指针相减代表的是指针所经历的元素的个数

  int a[5][5];
  int (*p)[4];//数组指针，类似整型指针本质“数组”也是一种类型！
  p = a;//int(*)[5]
  printf("a_ptr=%p,p_ptr=%p\n",&a[4][2],&p[4][2]);
  printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
  return 0;
}
