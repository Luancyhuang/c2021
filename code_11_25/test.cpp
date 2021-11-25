//#include <stdio.h>//c输入输出流
#include <iostream>//c++输入输出流
//using namespace std;//c++库的实现定义在一个叫std的命名空间中

using std::cout;
using std::endl;
#include <stdlib.h>
//命名冲突问题
//1.我们自己定义的变量、函数可能跟库里面重名冲突
//2.进入公司项目组以后，做的项目通常比较大，多人协作，两个同事写的代码，命名冲突
//c语言是没办法很好地解决这个问题（改名）
//C++ 提出一个新语法：用命名空间来解决这个问题
//命名空间是定义--域
//先在局部里面找，再去全局找，局部和全局都有，就优先在局部找，如果局部和全局都没有，就报错
//命名空间必须定义在全局，它是全局的

//编译器访问隔离--命名空间
void f()
{

  //局部域--栈上开辟的空间

}
//命名空间可以嵌套
//命名空间中可以定义变量/函数/类型
//namespace hxw1
//{ 
//  int rand = 0;//也是全局的变量，放在静态区，做隔离
//  
//  namespace hxw2
//  {    
//    int rand = 10;
//
//    int Add(int x,int y)
//    {
//      return x+y;  
//    }
//  
//    struct Node
//    {
//      struct Node* next;
//      int val;
//    };
//  }
//}
//1.指定作用域，做到最好的命名隔离，使用麻烦
//2.把整个命名空间展开，名字全部展开，用起来方便，隔离失效--展开到全局了/慎用
//
//using namespace hxw1;

//单独展开某一个，用于展开常用的
//using hxw1::rand;

//int a = 0;
using std::cin;
int main()
{
  //printf("hello.world\n");
  //printf("%d\n",rand);
  //printf("%d\n",hxw::rand);//:: 域作用限定符，取左边作用域里面的
  //int a = 1;
  //printf("%d\n",a);

  //printf("%d\n",::a);//左边是空白，表示全局域
  //hxw1::rand = 20;
  //printf("%d\n",hxw1::rand);

  //struct hxw1:: Node node;
  //hxw1::Add(1,2);
  //自动识别类型
  int i = 1;
  double d = 1.11;
  //cout << "hello,world" << endl;
  //cout << "hello,world" << "\n";
  //cout << "hello,world\n";
  printf("hello,world\n");
  cout << i << " " << d << endl;
  cin >> i >> d;
  cout << i << " " << d << endl;
  //c/c++的输入输出可以混在一起使用，哪个方便就使用哪个
  //控制小数位的位数的时候还是用printf 方便
  
}









