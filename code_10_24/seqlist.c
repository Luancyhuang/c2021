#include "seqlist.h"

void seqlistinit(SL *ps)
{
  ps->a = NULL;
  ps->size = ps->capacity = 0;
}
//尾插
void seqlistpushback(SL *ps,sldatatype x)
{
  //如果没有空间或者空间已满，需要开辟空间
  if(ps->size == ps->capacity)
  {
    int newcapacity = ps->capacity == 0?4:ps->capacity*2;
    sldatatype *tmp = (sldatatype*)realloc(ps->a,newcapacity*sizeof(sldatatype));
    if(tmp == NULL)
    {
      printf("realloc fail!\n");
      exit(-1);//异常退出
    }
    ps->a = tmp;
    ps->capacity = newcapacity;
  }
  ps->a[ps->size] = x;
  ps->size++;
}

void seqlistprint(SL *ps)
{
  for(int i=0;i<ps->size;i++)
  {
    printf("%d ",ps->a[i]);
  }
  printf("\n");
}

void seqlistpopback(SL *ps);
void seqlistpushfront(SL *ps,sldatatype x);
void seqlistpopfront(SL *ps);

