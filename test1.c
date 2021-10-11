#include <stdio.h>
//字符0的十进制数值大小。
//int main()
//{
//  printf("%d\n",'\0');//反斜杠0才是0.
//  char c = 48;
//  printf("%c\n",c);//字符0
//  return 0;
//}
//
//int main()
//{
//  int i = 0;
//  int j = 0;
//  if((++i>0)||(j++>0))
//  {
//    printf("you can see me!\n");
//  }
//  printf("%d,%d\n",i,j);
//  return 0;
//}
//int show()
//{
//  printf("you can see me!\n");
//  return 1;
//}
//int main()
//{
//  int flag  = 0;
//  printf("please enter:");
//  scanf("%d",&flag);
//  flag && show();  
//  return 0;
//}
//
//int main()
//{
//  printf("%d\n",2|3);
//  printf("%d\n",2&3);
//  printf("%d\n",2^3);
//  printf("%u\n",~0);//符号位也要参与操作
//  return 0;
//}
//
//int main()
//{
//  printf("%d\n",4^3);
//  
//  return 0;
//}
//
//int main()
//{
//  printf("%d\n",5^4^5);
//  printf("%d\n",5^5^4);
//  //任何数0进行异或都是它本身
//  //异或支持交换律和结合律
//  printf("%d\n",1^0);
//  printf("%d\n",1^1);
//  return 0;
//}
//两个数互相交换的三种方法：
//1.创建临时变量
//int main()
//{
//  int a = 0;
//  int b = 0;
//  scanf("%d%d",&a,&b);
//  printf("before:%d %d\n",a,b);
//  int tmp = a;
//  a = b;
//  b = tmp;
//  printf("after:%d %d\n",a,b); 
//  return 0;
//}
//2.相加相减后交换(但可能产生数据溢出问题）
//int main()
//{
//  int a = 10;
//  int b = 20;
//  a = a+b;
//  b = a-b;
//  a = a-b;
//  printf("%d %d",a,b);
//  return 0 ;
//}
//3.异或^
//int main()
//{
//  int a = 10;
//  int b = 20;
//  a = a^b;
//  b = a^b;
//  a = a^b;
//  printf("%d %d\n",a,b);
//  return 0;
//}
//1.设置指定比特位为1。
//2.显示int的所有比特位。
#define setbits(x,n) (x|= (1<<(n-1)))
void showbits(int x)
{
  int num = sizeof(x)*8-1;
  while(num>=0)
  {
    if(x&(1<<num))
    {
      printf("1");    
    }
    else 
    {
      printf("0");    
    }
    num--;
  }
  printf("\n");
}
//0|0 0|1 任何数和0或都是它本身
//1｜0 1｜1 任何数和0或都是1。
int main()
{
  int x = 0;
  setbits(x,5);
  showbits(x);
  return 0;
}












