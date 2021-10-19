#include <stdio.h>

int main()
{
  int a[3][4] = {0};
  printf("%d\n",sizeof(a));//代表整个数组元素的大小3*4*4 = 48
  printf("%d\n",sizeof(a[0][0]));//首元素的大小4
  printf("%d\n",sizeof(a[0]));//第一个元素的大小（里面有4个相同类型的元素4*4=16
  printf("%d\n",sizeof(a[0]+1));//第二个数组元素的地址大小是4/8
  printf("%d\n",sizeof(*(a[0]+1)));//第二个数组元素的大小为4
  printf("%d\n",sizeof(a+1));//第二个数组元素的地址大小为4/8
  printf("%d\n",sizeof(*(a+1)));//第二个数组元素的大小为4*4 =16
  printf("%d\n",sizeof(&a[0]+1));//第二个元素地址大小为4/8
  printf("%d\n",sizeof(*(&a[0]+1)));//第二个元素的大小为4*4=16
  printf("%d\n",sizeof(*a));//首元素地址解引用为4*4=16
  printf("%d\n",sizeof(a[3]));//越界但可以求出大小为4*4=16
  return 0;
}
