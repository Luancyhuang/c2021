#include "slist.h"

SLTNode* buyslistnode(SLTDataType x)
{
  SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
  
  if(newnode == NULL)
  {
    printf("malloc fail\n");
    exit(-1);//内存申请失败，说明内存没有多少空间！
  }

  newnode->data = x;
  newnode->next = NULL;
  return newnode;
}

void slistprint(SLTNode* phead)
{
  SLTNode* cur = phead;
  while(cur != NULL)
  {
    printf("%d->",cur->data);
    cur = cur->next;    
  }
  printf("NULL\n");
}
//尾插
void slistpushback(SLTNode** pphead,SLTDataType x)
{
  assert(pphead);//pphead二级指针的地址不会为空
  SLTNode* newnode = buyslistnode(x);
  
  if(*pphead == NULL)
  {
    *pphead = newnode;
  }
  else
  {
    //先找尾
    SLTNode* tail = *pphead;//把首节点的地址给tail
    //尾节点的地址为NULL
    while(tail->next != NULL)
    {
      tail = tail->next;
    }
    //链接
    tail->next = newnode;    
  }  
}

void slistpushfront(SLTNode** pphead,SLTDataType x)
{
  //如果为空节点没有问题！
  SLTNode* newnode = buyslistnode(x);
  
  newnode->next = *pphead;
  *pphead = newnode;
}
//尾删都没有节点的时候需要置空的时候需要传二级指针
void slistpopback(SLTNode** pphead)
{
  //1.定义一个变量prev 	
  //SLTNode* prev = NULL;
  SLTNode* tail = *pphead;
  //while(tail->next != NULL)//1.找尾
  //while(tail->next)//1.找尾
  //{
  //  prev = tail;
  //  tail = tail->next;
  //}
  //
  //free(tail);
  //tail == NULL;
  //
  //prev->next = NULL;//前一个prev置空
  //2.少定义一个变量
  //温柔一点的处理方式
  //if(*pphead)
  //{
  //  return;
  //}
  
  //3.粗暴一点的处理方式
  assert(*pphead != NULL);
  if((*pphead)->next == NULL)
  {
    free(*pphead);
    *pphead == NULL;
  }
  else
  {	  
    while(tail->next->next)
    {
      tail = tail->next;    
    }
  
    free(tail->next);
    tail->next = NULL;
  }
}
//头删
void slistpopfront(SLTNode** pphead)
{
  assert(*pphead != NULL);

  SLTNode* next = (*pphead)->next;
  free(*pphead);
  *pphead = next;
}

SLTNode* slistfind(SLTNode* pphead,SLTDataType x)//遍历链表
{
  SLTNode* cur = pphead;
  while(cur)
  {
    if(cur->data == x)
    {
      return cur;
    }
    else
    {
      cur = cur->next;
    }
  }
  return NULL;
}
//指定位置插入一个数字
//在pos 后面插入，更适合单链表，也更简单！
void slistinsertafter(SLTNode* pos,SLTDataType x)
{
  SLTNode* newnode = buyslistnode(x);
  //1.先改newnode指向的下一个节点
  newnode->next = pos->next;
  //2.再让pos->next 指向newnode
  pos->next = newnode;//这两行执行代码顺序不能换
}

//在pos 前面插入
void slistinsert(SLTNode** pphead,SLTNode* pos,SLTDataType x)
{
  SLTNode* newnode = buyslistnode(x);
  if(*pphead == pos)
  {  
     newnode->next = *pphead;
     *pphead = newnode;
  }
  else
  {
    //找到pos的前一个位置
    SLTNode* posprev = *pphead;//从头开始找
    while(posprev->next != pos)
    {
      posprev = posprev->next;
    }
    posprev->next = newnode;
    newnode->next = pos;
  }
}

void slisterase(SLTNode** pphead,SLTNode* pos)
{
  //1.先处理头
  if(*pphead == pos)
  {
    //*pphead = pos->next;
    //free(pos);
    //也可以调用头删接口函数
    slistpopfront(pphead);    
  }
  else
  {
    //要找前一个,需要付出时间的代价！
    //时间复杂度为O(n)!
    SLTNode*prev = *pphead;
    while(prev->next != pos)
    {
      prev = prev->next;
    }
    prev->next = pos->next;
    free(pos);  
    //pos 置空意义不大,此处改变形参不会改变实参当然将pos 置空是一个编程的好习惯
  }
}

void slisteraseafter(SLTNode* pos)
{
  assert(pos->next);

  SLTNode* next = pos->next;
  pos->next = next->next;
  free(next);
  next = NULL;//next指针随着栈帧一同销毁
}

void slistdestory(SLTNode** pphead)
{
  assert(pphead);
  SLTNode*cur = *pphead;
  while(cur)
  {
    SLTNode*next = cur->next;
    free(cur);
    cur = next;//把下一个指针给到cur
  }
  *pphead = NULL;
}





