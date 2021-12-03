#include <stdio.h>

/*int main()
{
  //char* p1 = "work";
  //char* p2 = "at";
  //char* p3 = "alibaba";

  char* a[] = {"work","at","alibaba"};//指针数组
  char** pa = a;
  pa++;

  printf("%s\n",*pa);

  return 0;
}*/


/*int main()
{
  char *c[] = {"ENTER","NEW","POINT","FIRST"};
  char** cp[] = {c+3,c+2,c+1,c};
  char*** cpp = cp;
  
  printf("%s\n", **++cpp);
  printf("%s\n", *--*++cpp+3);
  printf("%s\n", *cpp[-2]+3);
  printf("%s\n", cpp[-1][-1]+1);

  return 0;
}*/

//描述

//KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//输入描述：
//多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
//输出描述：
//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。

int main()
{
  int y = 0;
  int m = 0;

  int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
  //scanf返回的是读取到的完整数据的个数
  //EOF的值是-1
  while(~scanf("%d%d",&y,&m))	  
  {
    int day = days[m-1];
    //判断是否是否是闰年
    if((y%4 == 0 && y%100 !=0) || (y%400 == 0))
    {
      //判断是否是二月
      if(m == 2)
        day++;    
    }  
    printf("%d\n",day);
  }

  return 0;
}
