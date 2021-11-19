#include "stack.h"

void StackInit(ST* ps)
{
  assert(ps);

  ps->a =(STDataType*)malloc(sizeof(STDataType)*4);//给4个大小的空间
  if(ps->a == NULL)
  {
    printf("malloc fail\n");
    exit(-1);    
  }

  ps->top = 0;//1.给0表示指向栈顶元素的下一个元素，2.-1才是栈顶元素
  ps->capacity = 4;
}

void StackDestroy(ST* ps)
{
  assert(ps);
  free(ps);
  ps->a = NULL;
  ps->top = ps->capacity = 0;
}
//入栈
void StackPush(ST* ps,STDataType x)
{
  assert(ps);
  if(ps->top == ps->capacity)
  {
    STDataType* tmp =(STDataType*)realloc(ps->a,ps->capacity*2*sizeof(STDataType));
    if(tmp == NULL)
    {
      printf("realloc fail\n");
      exit(-1);    
    }
    else
    {
      ps->a = tmp;
      ps->capacity *= 2;    
    }
  }
  ps->a[ps->top] = x;
  ps->top++;
}
//出栈
void StackPop(ST* ps)
{
  assert(ps);
  //栈空了，调用Pop，直接终止程序
  assert(ps->top > 0);//断言不能为空
  ps->top--;
}

STDataType StackTop(ST* ps)
{
  assert(ps);
  //栈空了，调用Top，直接终止程序
  assert(ps->top > 0);

  return ps->a[ps->top-1];

}

bool StackEmpty(ST* ps)
{
  assert(ps);
  return ps->top == 0;
}

int StackSize(ST* ps)
{
  assert(ps);
  return ps->top;
}
