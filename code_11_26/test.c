#include <stdio.h>

/*int main()
{
  //C预定义符号	
  printf("%s\n",__FILE__);//进行编译的源文件
  printf("%d\n",__LINE__);//文件当前的行号
  printf("%s\n",__DATE__);//文件被编译的日期
  printf("%s\n",__TIME__);//文件被编译的时间
  printf("%d\n",__STDC__);//如果编译器遵循ANSI C，其值为1，否则未定义
  
  return 0;
}*/


//1.#define 定义标识符常量
//2.#define 定义宏


/*#define MAX 100
#define reg register
#define STR "hehe"

int main()
{
  
  int m = MAX;
  reg int a = 100;
  
  printf("%s\n",STR);
  return 0;
}*/


/*#define PRINT(n) printf("the value "#n" is %d\n",n)

int main()
{
  int a = 10;
  PRINT(a);
  int b = 20;
  PRINT(b);
  return 0;
}*/


#define ADD(x,y) x##y

int main()
{
  int class102 = 100;
  printf("%d\n",ADD(class,102));
  return 0;
}









