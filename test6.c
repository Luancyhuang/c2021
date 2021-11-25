//模拟实现atoi函数
//atoi是一个库函数/把字符串转换成整型

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>

enum State
{
  VALID,//正常
  INVALID//非法
};

enum State state = INVALID;

int MyAtoi(const char* str)
{
  //1.str 是空指针
  assert(str);
  //2.str 指向的是空字符串
  if(*str == '\0')
  {
    return 0;  
  }
  //跳过空白字符
  while(isspace(*str))
  {
    str++;  
  }
  //识别正负数
  int flag = 1;
  if(*str == '+')
  {
    str++;  
  }
  else if(*str == '-')
  {
    flag = -1;
    str--;
  }

  long long ret = 0;
  while(*str)
  {
    if(isdigit(*str))
    {
      ret = ret*10 + flag*(*str - '0');
      if(ret > INT_MAX || ret < INT_MIN)
      {
        return 0;//非法返回
      }
      str++;
    }
    else
    {
      state = VALID;
      return (int)ret;//合法
    }  
  }

  state = VALID;
  return (int)ret;
}

int main()
{
  int ret1 = MyAtoi("1234");
  int ret2 = atoi("123abc456");
  printf("%d\n",ret2);
  //MyAtoi(NULL)如何处理？
  //MyAtoi("")空字符串如何处理？
  //MyAtoi("    1234")前面有空白字符如何处理？
  //MyAtoi("+/-")正负号如何处理？
  //MyAtoi("1234abc")出现了非字符如何处理？
  //MyAtoi("123123123123")给的数字太大了，存在溢出
  if(state == VALID)
  {
    printf("合法返回，值为：%d\n",ret1);
  }
  else
  {
    printf("异常返回，值为：%d\n",ret1);  
  }
  return 0;
}
