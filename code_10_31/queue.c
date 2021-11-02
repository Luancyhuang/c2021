#include "queue.h"

void QueueInit(Queue* pq)
{
  assert(pq);
  pq->head = NULL;
  pq->tail = NULL;
}

void QueueDestroy(Queue* pq)
{
  assert(pq);
  QueueNode *cur = pq->head;
  while(cur != NULL)
  {
    QueueNode* next = cur->next;//先保存下一个结点地址
    free(cur);
    cur = next;
  }
  pq->head = pq->tail = NULL;  
}

void QueuePush(Queue* pq,QDataType x)//队尾入数据
{
  assert(pq);
  
  QueueNode* newnode =(QueueNode*)malloc(sizeof(QueueNode));
  newnode->data = x;
  newnode->next = NULL;

  if(pq->head == NULL)
  {
    pq->head = pq->tail = newnode;    
  }
  else
  {
    pq->tail->next = newnode;
    pq->tail = newnode;//变成新的尾结点  
  }
}

void QueuePop(Queue* pq)//队头删除数据
{
  assert(pq);
  assert(!QueueEmpty(pq));
  
  if(pq->head == NULL)
  {
    return;
  }

  QueueNode* next = pq->head->next;
  free(pq->head);
  pq->head = next;//指向下一个队头结点
  //tail 防止野指针，tail 需要置空
  if(pq->head == NULL)
  {
    pq->tail == NULL;
  }
}

QDataType QueueFront(Queue* pq)//取队头的数据
{
  assert(pq);
  assert(!QueueEmpty(pq));
  
  return pq->head->data;

}

QDataType QueueBack(Queue* pq)//取队尾的数据
{
  assert(pq);
  assert(!QueueEmpty(pq));

  return pq->tail->data;
  
}

int QueueSize(Queue* pq)//队中的数据
{
  assert(pq);
  int n = 0;
  QueueNode* cur = pq->head;
  
  while(cur)
  {
    ++n;
    cur = cur->next;
  }
  return n;
}

bool QueueEmpty(Queue* pq)//判断队是否为空
{
  assert(pq);
  return pq->head == NULL;//头指针为空就是为空
}



