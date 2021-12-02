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
/*int main()
{
  //旋转字符串说明字符串要被修改放在字符数组中
  char arr[] = "abcdef";
  RotateStr(arr,8);//旋转字符串
  printf("%s\n",arr);//打印旋转后的字符串

  return 0;
}*/

//写一个函数，判断一个字符串是否是否是另一个字符串旋转而来
//例如：给定s1 =AABCD和s2 = BCDAA，返回1
//给定s1=abcd和s2=ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

//判断arr2是否为arr1旋转而来

/*int IsRotateStr(char* arr1,char* arr2)
{
  int len = strlen(arr1);
  for(int i=0;i<len;i++)
  {	  
    RotateStr(arr1,1);

    if(strcmp(arr1,arr2) == 0)
      return 1;    
  }
  return 0;
}

int main()
{
  char arr1[] = "AABCD";
  char arr2[] = "BCDAA";
  int ret = IsRotateStr(arr1,arr2);
  
  if(ret == 1)
  {
    printf("yes\n");    
  }
  else
  {
    printf("no\n");  
  }

  return 0;
}*/


/*int main()
{
  char arr1[20] = "abc";
  strcat(arr1,arr1);
  printf("%s\n",arr1);

  return 0;
}*/

//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增，
//矩阵从上到下是递增，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求:时间复杂度小于O(N)。

//1 2 3
//4 5 6
//7 8 9
void FindK(int arr[3][3],int k,int row,int col)
{
  int x = 0;
  int y = col - 1;
  
  while(x < row && y >= 0)
  {	  
    if(arr[x][y] < k)
    {
      x++;
    } 
    else if(arr[x][y] > k)
    {
      y--;
    }
    else
    {
      printf("找到了,下标是:%d %d\n",x,y);
      return;//找到了就直接返回
    }
  }

  printf("找不到\n");
}
//返回型参数- 用指针带回
int main()
{
  int arr[3][3] = {1,2,3,4,5,6,7,8,9};
  int k = 17;

  FindK(arr,k,3,3);
  
  return 0;
}


