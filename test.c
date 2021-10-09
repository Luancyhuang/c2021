#include <stdio.h>
//struct stu
//{
//  
//
//};
//int main()
//{
//  struct stu s;
//  printf("%d\n",sizeof(s));//计算空结构体所占空间的大小
//  return 0;
//}
//union un
//{
//  int num;
//  char ch;
//};
//
//int main()
//{
//  union un u;
//  printf("%d\n",sizeof(union un));//计算联合体空间大小
//  return 0;
//}
union un
{
  int a;
  char b;
};
int main()
{
  union un x;
  x.a = 1;
  if(x.b==1)
  {
    printf("小端\n");
  }
  else 
  {
    printf("大端\n");
  }
  return 0;
}










