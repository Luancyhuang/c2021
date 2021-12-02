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

/*int main()
{ 
  //字符串存放的两种形式
  //1.字符串存放在数组中
  //放在两个空间中
  char str1[] = "hello,bit";
  char str2[] = "hello,bit";
  
  //2.字符串存放在字符指针中
  //放在字符常量区，静态区
  char* str3 = "hello,bit";
  char* str4 = "hello,bit";

  if(str1 == str2)
    printf("str1 and str2 are same!\n");
  else
    printf("str1 and str2 are not same!\n");
  
  if(str3 == str4)
    printf("str3 and str4 are same!\n");
  else
    printf("str3 and str4 are not same!\n");

  return 0;
}*/

void reverse(char* left,char* right)
{
  assert(left && right);
  while(left<right)
  {
    char tmp = *left;
    *left = *right;
    *right = tmp;
    left++;
    right--;
  }
}

void RotateStr(char* str,int k)
{
  assert(str);
  int len = strlen(str);
  k %= len;
  reverse(str,str+k-1);//逆序左边
  reverse(str+k,str+len-1);//逆序右边
  reverse(str,str+len-1);//逆序整体
}

/*void RotateStr(char* str,int k)
{
  assert(str);
  int len = strlen(str);
  for(int i=0;i<k;i++)
  { 
    k %= strlen(str);//如果k的数字比字符串的长度还大的时候需要取模
    //旋转第一个字符
    //1.保存第一个字符
    char tmp = *str;
    //2.把后面的字符一次往前挪
    for(int j=0;j<len-1;j++)
    {
      str[j] = str[j+1];
    }
    //3.把第一个字符放在最后一个位置
    str[len-1] = tmp;
  }
}*/

//旋转字符串
int main()
{
  //旋转字符串说明字符串要被修改放在字符数组中
  char arr[] = "abcdef";
  RotateStr(arr,8);//旋转字符串
  printf("%s\n",arr);//打印旋转后的字符串

  return 0;
}


