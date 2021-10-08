#include <stdio.h>
//char *s show()
//{
//  char str[] = "abcdef";
//  return str;	
//}
//int main()
//{
//  char *s = show();
//  printf("%s\n",s);
//  return 0;
//}
//编写一段程序，求出矩阵x和y的积。
int main()
{
  int x[2][3] = {1,2,3,4,5,6};
  int y[3][2] = {1,5,5,3,8,1};
  int result[2][2] = {0};
  int i = 0;
  int j = 0;
  int k = 0;
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      int tmp = 0;
      for(k=0;k<3;k++)
      {
        tmp += x[i][k] *y[k][j];
      }
      result[i][j] = tmp;
    }  
  }
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("%d ",result[i][j]);    
    }  
  }
  return 0;
}
