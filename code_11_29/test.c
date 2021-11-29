#include <stdio.h>
#include <unistd.h> 

/*int main()
{
  FILE* pf = fopen("test.txt","w");
  fputs("abcdef",pf);//先将代码放在输出缓冲区
  printf("睡眠10秒,已经开始写数据了，打开test.txt文件，发现文件没有内容\n");
  sleep(10);
  printf("刷新缓冲区\n");
  fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
  //fflush 在高版本的VS 上不能使用了
  printf("再睡眠10秒,此时，再次打开test.txt文件，文件有内容了\n");
  sleep(10);
  fclose(pf);
  //fclose在关闭文件的时候，也会刷新缓冲区
  pf = NULL;
  return 0;
}*/

/*int main()
{
  fputc('b',stdout);
  fputc('i',stdout);
  fputc('t',stdout);
  printf("\n"); 
  return 0;
}*/
#include <string.h>
#include <stdlib.h>

//1.str 传给p的时候，是值传递，p是str的临时拷贝，所以当malloc开辟的空间起始地址放在p中的时候，不会影响str,str依然为NULL
//2.当str为NULL，strcpy想把“hello,world”拷贝到str指向的空间时，程序就崩溃了，因为NULL指向的空间是不能直接访问
//3.没有主动free掉malloc申请的空间，存在内存泄漏问题
//4.那么出现这种问题如何解决？
//C语言用可以传址-&（形参二级指针）解决\C++用"引用&"来解决
//也可以利用返回值带回地址的方法解决

/*void GetMemory(char* p)
{
  p = (char*)malloc(100);
}

void Test()
{
  char* str = NULL;
  GetMemory(str);
  strcpy(str,"hello.world");
 
  printf(str);
  printf("\n");
}

int main()
{
  Test();   
  
  return 0;
}*/

//程序运行打印的是随机值
//原因：1.返回栈空间地址问题
//解决办法：用static (在静态区开辟空间，出了函数作用域不销毁）
//用malloc（堆区开辟空间，出函数作用域范围也不销毁，同上）,需要程序员自己主动释放掉申请的空间
/*char* GetMemory()
{
  char p[] = "hello,world";
  return p;
}

void Test()
{
  char* str = NULL;
  str = GetMemory();
  printf(str);
}

int main()
{
  Test();
  return 0;  
}*/

/*int* Test()
{
  static int n = 10;
  return &n;
}

int main()
{
  int* p = Test();
  printf("%d\n",*p);

  return 0;
}*/

//内存泄漏，记得free

/*void GetMemory(char** p,int num)
{
  *p = (char*)malloc(num);
}

void Test()
{
  char* str = NULL;
  GetMemory(&str,100);
  strcpy(str,"hello");
  printf(str);
}

int main()
{
  Test();
  return 0;
}*/

void Test()
{
  char* str = (char*)malloc(100);
  strcpy(str,"hello");
  free(str);//是这里过早就free释放掉str?如果是，那么判断str是否为空是不是应该在拷贝"hello"之前就应该判断？！显然这里逻辑不通
  //这里应该是把str 置NULL才是问题所在
  if(str != NULL)
  {
    strcpy(str,"world");//这里str所指向的空间已经还给操作系统了
    printf(str);//再打印很可能就是随机值
  }
  //编译器不报错不代表程序代码就是正确的，小偷偷了东西没被发现，不能说明他的行为就是对的
}

int main()
{
  Test();
  return 0;
}





