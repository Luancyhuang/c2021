#include <stdio.h>

struct listnode* reverselist(truct listnode* head)
{
  if(head == NULL)
    return NULL;
  //给定初始条件
  struct listnode* n1,*n2,*n3;
  n1 = NULL;
  n2 = head;
  n3 = head->next;
  //实现功能
  while(n2)
  {
    //翻转的核心逻辑
    n2->next = NULL;
    //迭代走
    n1 = n2;
    n2 = n3;
    if(n3)
      n3 = n3->next;  
  }
  return n1;
}

int main()
{
   


  return 0;
}
