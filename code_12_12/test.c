#include <stdio.h>

/*int main()
{
  char password[20] = {0};
  printf("请输入密码：");
  scanf("%s",password);

  //把缓冲区中的内容清理掉
  while(getchar() != '\n')
  {
    ;
  
  }

  printf("请确认(Y\\N):>");
  int ch = getchar();
  
  if(ch == 'Y')
  {
    printf("确认成功\n");  
  }
  else
  {
    printf("确认失败\n");  
  }




  return 0;
}*/

/*int main()
{
  char arr[20] = "xxxxxxxxx";
  scanf("%s",arr);

  return 0;
}*/




/*(int main()
{
  int ch = 0;
  while((ch = getchar()) != EOF)
  {
    if(ch < '0'|| ch > '9')
      continue;
    putchar(ch);
  
  } 
  return 0;
}*/


/*int test()
{
  int a = 10;
  int b = 20;
  return a,b;//逗号表达式只能带回一个后面的数值
}


int main()
{
  int ret = test();
  printf("%d\n",ret);


  return 0;
}*/

/*int test(int arr[])
{
  int a = 10;
  int b = 20;
  arr[0] = a;
  arr[1] = b;
}

int main()
{
  int arr[2] = {0};
  test(arr);

  printf("%d %d\n",arr[0],arr[1]);
  return 0;
}*/
#include <string.h>

/*void ReverseTable(char* str)
{
  int len = strlen(str);
  int left = 0;
  int right = len - 1;

  while(left<right)
  {	  
    char tmp = str[left];
    str[left] = str[right];
    str[right] = tmp;
    left++;
    right--;
  }
}*/

/*int MyStrlen(char* str)
{
  int count = 0;
  while(*str != '\0')
  {
    count++;
    str++;
  }
  return count;
}

void ReverseTable(char* str)
{
  int len = MyStrlen(str);

  char tmp = *str;
  *str = str[len-1];
  str[len-1] = '\0';
  
  if(MyStrlen(str+1) >= 2)
    ReverseTable(str+1);
  str[len-1] = tmp;
}

int main()
{
  char arr[20] = "abcdefg";
 
  ReverseTable(arr);
  printf("%s\n",arr);

  return 0;
}*/

//递归实现n的k次方
/*double POW(int n,int k)
{
  if(k>0)
    return n*POW(n,k-1);
  else if(k == 0)
    return 1;
  else
    return 1.0/POW(n,-k);
}

int main()
{
  int n = 2;
  int k = -3;
  
  double ret = POW(n,k);
  printf("%lf\n",ret);

  return 0;
}*/
//计算一个数的每位之和（递归实现）
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
/*int DigitSum(unsigned int n)
{
  if(n>9) 
    return DigitSum(n/10) + n%10;
  else
    return n;
}

int main()
{
  unsigned int n = 4567;
  int ret =  DigitSum(n);
  printf("%d\n",ret);
  return 0;
}*/











