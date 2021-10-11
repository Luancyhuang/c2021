#include <stdio.h>
//编写一个函数getbits，从一个16位的单元中取出某几位（即该几位保留原值，其余位为0）。函数调用形式为getbits(value n1,n2).
//value 为该16位（2个字节）中的数据值，n1为欲取出的起始位，n2为欲取出的结束位，例如：
//getbits(0101675,5,8)表示对八进制101675这个数，取出它的从左边起第5位到第8位
unsigned short getbits(unsigned short value, int n1,int n2)
{
  unsigned short z = 0;
  z = ~0;
  z = (z >> n1) & (z << (16-n2));
  z = value & z;
  z = z >> (16-n2);
  return z;
}
int main()
{
  unsigned short a = 0;
  int n1 = 0;
  int n2 = 0;
  printf("input an octal number: && n1: n2:");
  scanf("%o %d %d",&a,&n1,&n2);
  unsigned short ret = getbits(a,n1,n2);
  printf("ret= %o\n",ret);
  return 0;
}
