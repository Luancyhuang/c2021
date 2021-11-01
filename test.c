#include <stdio.h>
struct Node
{
  int val;
  struct Node* next;
  struct Node* random;
};

//给你一个长度为 n 的链表，每个节点包含一个额外增加的随机指针 random ，该指针可以指向链表中的任何节点或空节点。
//1.复制结点，插入到原结点和下个结点之间
//2.根据原结点的random 复制结点的random
//3.拷贝结点解下来链接成一个新链表，恢复原链表链接关系
struct Node* CopyRandomList(struct Node*)
{
  struct Node* cur = head;
  while(cur)
  {
    struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
    copy->val = cur->val;//copy 结点的val等于原结点的val
    
    //插入copy 结点
    copy->next = cur->next;
    cur->next = copy;
    
    cur = copy->next;//迭代往后走      
  }

  cur = head;
  while(cur)
  {
    struct Node* copy = cur->next;
    if(cur->random == NULL)
    {
      copy->random == NULL;
    }
    else
    {
      //copy结点的random等于原结点random的next
      copy->random = cur->random->next;      
    }
    cur = copy->next;//迭代往后走
  }

  //为了不找尾，给一个tail结点
  struct Node* copyHead = NULL,*copyTail = NULL;
  cur = head;
  while(cur)
  {
    struct Node* copy = cur->next;
    struct Node* next = copy->next;

    if(copyTail == NULL)
    {
      copyTail = copyHead = copy;    
    }
    else
    {
      copyTail->next = copy;
      copyTail = copy;//往后走
    }
    cur->next = next;//原链表要重新链接
    cur = next;
  }
  return copyHead;//返回copy的头结点  
}

int main()
{
  


  return 0;
}
