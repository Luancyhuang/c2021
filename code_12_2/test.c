#include <stdio.h>
#include <string.h>

/*int main()
{
  char arr1[20] = "abcdefghi";
  char arr2[] = "xxxx";

  printf("%s\n",strncpy(arr1,arr2,4));


  return 0;
}*/
//strstr - 字符串查找函数
//第一个字符串中查找对应的字符串
#include <assert.h>

/*char* MyStrstr(const char* str1,const char* str2)
{
  assert(str1 && str2);
  char* s1;
  char* s2;
  char* cp = str1;

  if(*str2)
    return str1;
  
  while(*cp)
  {
    s1 = cp;
    s2 = str2;
    while(*s1 && *s2 && *s1 == *s2)
    {
      s1++;
      s2++;    
    }
    //拦截一种情况就是s2就是遇到了'\0'
    if(*s2 == '\0')
    {
      return cp;
    }
    cp++;
  }
  //找不到
  return NULL;
}

int main()
{
  char arr1[] = "i am a good student hehe student";
  char arr2[] = "studentq";
  //查找arr1中arr2第一次出现的位置
  char* ret = MyStrstr(arr1,arr2);
  if(ret == NULL)
    printf("找不到\n");
  else
    printf("%s\n",ret);	  

  return 0;
}*/


//strtok - 字符串切割

int main()
{
  

  return 0;
}


