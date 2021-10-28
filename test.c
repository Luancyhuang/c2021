#include <stdio.h>
#include <stdlib.h>

struct listnode
{
  int val;
  struct listnode* next;
};

struct listnode* removeelements(struct listnode* head,int val)
{
  struct listnode *prev = NULL,*cur = head;
  while(cur)
  {
    if(cur->val == val)
    {
      //头删
      if(cur == head)
      {
        head = cur->next;
	free(cur);
	cur = head;
      }
      //中间删
      else
      {
        //停下来，删除
        prev->next = cur->next;
        free(cur);
        cur = prev->next;
      }
    }
    else
    {
      //迭代往后走
      prev = cur;
      cur = cur->next;
    }  
  }
  return head;
}

int main()
{
  struct listnode* n1 = (struct listnode*)malloc(sizeof(struct listnode));    
  struct listnode* n2 = (struct listnode*)malloc(sizeof(struct listnode));    
  struct listnode* n3 = (struct listnode*)malloc(sizeof(struct listnode));    
  struct listnode* n4 = (struct listnode*)malloc(sizeof(struct listnode));    
  struct listnode* n5 = (struct listnode*)malloc(sizeof(struct listnode));     
  n1->val = 7;
  n2->val = 7;
  n3->val = 7;
  n4->val = 7;
  n5->val = 7;
  
  n1->next = n2;
  n2->next = n3;
  n3->next = n4;
  n4->next = n5;
  n5->next = NULL;
  
  struct listnode* head = removeelements(n1,7);
  
  return 0;
}
