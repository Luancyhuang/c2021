#include "stack.h"

int main()
{
  ST st;
  StackInit(&st);
  StackPush(&st,1);
  StackPush(&st,2);
  StackPush(&st,3);
  StackPush(&st,4);
  StackPush(&st,5);
  
  while(!StackEmpty(&st))
  {
    printf("%d ",StackTop(&st));
    StackPop(&st);//不能随便遍历数据
  }
  printf("\n");
  
  StackDestroy(&st);

  return 0;
}
