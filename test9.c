#include <stdio.h>
#include <stddef.h>
//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//考察：offsetof宏的实现

struct Stu
{
  int a;//0~3
  char c;//4~7
  double d;//8~15
};

#define OFFSETOF(struct_type,mem_name) (int)&(((struct_type*)0)->mem_name)

int main()
{
  //printf("%d\n",offsetof(struct Stu,a)); 
  //printf("%d\n",offsetof(struct Stu,c)); 
  //printf("%d\n",offsetof(struct Stu,d)); 
  printf("%d\n",OFFSETOF(struct Stu,a));
  printf("%d\n",OFFSETOF(struct Stu,c));
  printf("%d\n",OFFSETOF(struct Stu,d));
  return 0;
}
