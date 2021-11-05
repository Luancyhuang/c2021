#include "heap.h"

void HeapInit(HP* hp)//初始化
{
  assert(hp);
  hp->a = NULL;
  hp->size = hp->capacity = 0;
}

void HeapDestroy(HP* hp)
{
  assert(hp);
  free(hp->a);
  hp->size = hp->capacity = 0;
}
void AdjustUp(int* a,int n,int child)
{
  assert(a);
  int parent = (child-1)/2;
  while(child > 0)//parent >= 0//不是通过正常管道流出
  {
    if(a[child]>a[parent])
    {
      HPDataType tmp = a[child];
      a[child] = a[parent];
      a[parent] = tmp;

      child = parent;
      parent = (child-1)/2;
    }
    else
    {
      break;
    }
  }
}
void HeapPrint(HP* hp)
{
  for(int i=0;i<hp->size;i++)
  {
    printf("%d ",hp->a[i]);
  }
  printf("\n");
}

void HeapPush(HP* hp,HPDataType x)
{
  assert(hp);
  if(hp->size == hp->capacity)
  {
    size_t newCapacity = hp->capacity == 0?4:hp->capacity*2; 
    HPDataType* tmp = realloc(hp->a,sizeof(HPDataType)*newCapacity);
    if(tmp == NULL)
    {
      printf("realloc fail!\n");
    }
    hp->a = tmp;
    hp->capacity = newCapacity;
  }

  hp->a[hp->size] = x;
  hp->size++;
  AdjustUp(hp->a,hp->size,hp->size-1);
}

void HeapPOP(HP* hp);
