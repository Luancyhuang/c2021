#include <stdio.h>
#include <string.h>

void reverse(char* str)
{
  int len = strlen(str);
  int left = 0;
  int right = len - 1;
  //交换首尾两个元素
  while(left<right)
  {	  
    char tmp = str[left];
    str[left] = str[right];
    str[right] = tmp;
    left++;
    right--;
  }
}

int main()
{
  char arr[100] = {0};
  gets(arr);
  reverse(arr);
  printf("%s\n",arr);
  return 0;
}
