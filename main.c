#include <stdio.h>
//int mysum(int top)
//{
//  int i = 1;
//  int sum = 0;
//  for(;i<top;i++)
//  {
//    sum += i;
//  }
//  return sum;
//}
//int main()
//{
//  printf("process begin running...!\n");
//  int result = mysum(100);
//  printf("result:%d\n",result);
//  printf("process end running...!\n");
//  return 0;
//}
//
//#define init_val(a,b) do{\
//	printf("before:%d %d\n",a,b);\
//	a=0;\
//	b=0;\
//	printf("after:%d %d\n",a,b);\
//        }while(0)
//int main()
//{
//  int x = 10;
//  int y = 20;
//  int flag = 0;
//  scanf("%d",&flag);
//  if(flag)
//  {
//    init_val(x,y);
//  }
//  else 
//  {
//    x = 100;
//    y = 200;  
//  }
//  return 0;
//}
//#define C 
#define CPP
int main()
{
//  printf("hello,world!\n");
//  printf("hello,bit!\n");
//#else
//  printf("hello,gcc!\n");
//#endif
//
//#if VERSION < 1
//  printf("hello1\n");
//#elif VERSION < 2
//  printf("hello2\n");
//#elif VERSION < 3
//  printf("hello3\n");
//#else
//  printf("hello,other!\n");
//#endif
//#if defined(VERSION)
//  printf("hello version!\n");
//#else
//  printf("hello.other!\n");
//#endif
//#if (defined(C) && defined(CPP))
//  printf("hello,c and cpp!\n");
//#else 
//  printf("hello.other!\n");
//#endif
//#if defined(C)
//    #if defined(CPP)
//	printf("hello.CPP!\n");
//    #endif
//	printf("hello.C!\n");
//#else
//	printf("hello.other!\n");
//#endif
#if defined(C)
	printf("hello C!\n");
#elif defined(CPP)
	printf("hello CPP!\n");
#else
	printf("hello.other\n");
#endif
  return 0;
}





