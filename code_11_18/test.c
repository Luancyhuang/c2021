#include "queue.h"

void TestQueue()
{
  Queue q;
  QueueInit(&q);  
  
  QueuePush(&q,1);
  QueuePush(&q,2);
  QueuePush(&q,3);
  QueuePush(&q,4);
  QueuePush(&q,5);
  //边删边读取数据
  while(!QueueEmpty(&q))
  {
    printf("%d ",QueueFront(&q));
    QueuePop(&q);  
  }
  printf("\n");

  QueueDestroy(&q);
}

int main()
{
  TestQueue();
  return 0;
}
