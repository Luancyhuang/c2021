#include "list.h"

ListNode* BuyListNode(LTDataType x)
{
  ListNode* newnode =(ListNode*)malloc(sizeof(ListNode));
  newnode->data = x;//初始化新结点
  newnode->prev = NULL;
  newnode->next = NULL;

  return newnode;
}

void ListPrint(ListNode* phead)
{
  ListNode* cur = phead->next;//如何是空也不会有问题
  while(cur != phead)
  {
    printf("%d->",cur->data);
    cur = cur->next;
  }
  printf("\n");
}

ListNode* ListInit()
{
  ListNode* phead = BuyListNode(0);//通过返回值的形式传递指针
  phead->prev = phead;//指向自己
  phead->next = phead;

}

void ListDestroy(ListNode* phead)
{
  assert(phead);
  ListNode* cur = phead->next;
  while(cur != phead)
  {
    ListNode* next = cur->next;
    free(cur);
    cur = next;  
  }
  free(phead);
  phead = NULL;
}

void ListPushBack(ListNode* phead,LTDataType x)
{
  assert(phead);

  ListNode* tail = phead->prev;
  ListNode* newnode = BuyListNode(x);
  
  tail->next = newnode;
  newnode->prev = tail;
  newnode->next = phead;
  phead->prev = newnode;
}

void ListPushFront(ListNode* phead,LTDataType x)
{
  assert(phead);
  //1.定义first结点的情况下，可以不注意顺序
  //ListNode* first = phead->next;
  //ListNode* newnode = BuyListNode(x);

  //phead->next = newnode;
  //newnode->prev = phead;
  //newnode->next = first;
  //first->prev = newnode;
  //2.如果没有first结点的情况下，需要注意连接结点顺序
  ListNode* newnode = BuyListNode(x);
  newnode->next = phead->next;
  phead->next->prev = newnode;

  phead->next = newnode;
  newnode->prev = phead;
}

void ListPopBack(ListNode* phead)
{
  assert(phead);
  assert(phead->next != phead);//只剩下自己的时候就不能删除掉
  
  ListNode* tail = phead->prev;
  ListNode* prev = tail->prev;

  prev->next = phead;
  phead->prev = prev;

  free(tail);
  tail = NULL;
}

void ListPopFront(ListNode* phead)
{
  assert(phead);
  assert(phead->next != phead);//只剩下自己的时候就不能删除掉

  ListNode* first = phead->next;
  ListNode* second = first->next;
  
  phead->next = second;
  second->prev = phead;
  
  free(first);
  first = NULL;
}

ListNode* ListFind(ListNode* phead,LTDataType x)
{   
  assert(phead);
  ListNode* cur = phead->next;
  while(cur != phead)
  {
    if(cur->data == x)
    {
      return cur;
    }
    cur = cur->next;
  }
  return NULL;  
}

void ListInsert(ListNode* pos,LTDataType x)
{
  assert(pos);
  
  ListNode* prev = pos->prev;
  ListNode* newnode = BuyListNode(x);
  //改变三个结点的连接关系
  newnode->prev = prev;
  prev->next = newnode;
  newnode->next = pos;
  pos->prev = newnode;

}

void ListErase(ListNode* pos)
{
  assert(pos);
  ListNode* prev = pos->prev;
  ListNode* next = pos->next;

  prev->next = next;
  next->prev = prev;
  free(pos);
  pos = NULL;
}
