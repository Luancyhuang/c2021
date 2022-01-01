#include <stdio.h>

/*int main()
{
  unsigned char c1 = 255;
  printf("%d\n",c1);

  char c2 = 255;
  printf("%d\n",c2);

  return 0;
}*/

/*int main()
{ 
  int a = 1;
  int b = -1;

  return 0;
}*/

/*int CheckSystem()
{
  int a = 1;
  return *(char*)&a;
}

int main()
{
  int ret = CheckSystem();
  if(ret == 1)
  {
    printf("小端\n");
  }
  else
  {
    printf("大端\n");  
  }
 
  return 0;
}*/


/*int main()
{
  char a = -1;
  signed char b = -1;
  unsigned char c = -1;
  printf("a=%d,b=%d,c=%d\n",a,b,c);


  return 0;
}*/

/*int main()
{
  char a = -128;
  //10000000 00000000 00000000 10000000
  //11111111 11111111 11111111 01111111
  //11111111 11111111 11111111 10000000 -1的补码
  //a 存在内存的的八个比特位 10000000
  //整型提升 11111111 11111111 1111111 10000000
  printf("%u\n",a);//以无符号数的形式，打印整型

  return 0;
}*/

/*int main()
{
  char a = 128;
  //00000000 00000000 00000000 10000000
  //11111111 11111111 11111111 10000000
  //
  printf("%u\n",a);
  return 0;
}*/

/*int main()
{
  int i = -20;
  //10000000 00000000 00000000 00010100
  //11111111 11111111 11111111 11101011
  //11111111 11111111 11111111 11101100 -20的补码

  
  unsigned int j = 10;
  //00000000 00000000 00000000 00001010 10的补码
  //11111111 11111111 11111111 11110110 i+j 补码相加
  //11111111 11111111 11111111 11110101 反码
  //10000000 00000000 00000000 00001010 原码 -10
  printf("%d\n",i+j);

  return 0;
}*/

/*int main()
{
  unsigned int n = -10;

  printf("%d\n",n);
  printf("%u\n",n);
  return 0;
}*/

#include <unistd.h>
/*int main()
{
  unsigned int i;
  for(i=9;i>=0;i--)
  {
    printf("%u\n",i);
    sleep(1);
  }
  return 0;
}*/
#include <string.h>

int main()
{
  char a[1000];
  int i;
  for(i=0;i<1000;i++)
  {
    a[i] = -1 - i;
  }
  printf("%d\n",strlen(a));
  return 0;
}

