#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>

#define N 10

typedef struct node
{
  int data;
  struct node *next;
}node_t;
node_t *alloc_node(int x)
{
  node_t *node =(node_t*)malloc(sizeof(node_t));
  if(node == NULL)
  {
    perror("malloc fail!");
    exit(1);
  }
  node->data = x;
  node->next = NULL;
  return node;
}
void insert_node(node_t *head ,int x)
{
  assert(head);
  node_t *newnode = alloc_node(x);
  newnode->next = head->next;
  head->next = newnode;
}
void show_list(node_t *head)
{
  assert(head);
  node_t *p = head->next; 
 
  while(p)
  {
    printf("%d ",p->data);
    p=p->next;
  }
  printf("\n");
}

void delete_node(node_t *head)
{
  assert(head);
 
  node_t *p =head->next;
  head->next = p->next;
  
  free(p);
  p = NULL;
}

int main()
{
  node_t *head = alloc_node(0);
  printf("插入测试...\n");
  for(int i=1;i<=N;i++)
  {
    insert_node(head,i);//头插
    show_list(head);
    sleep(1);  
  }
  printf("删除测试...\n");
  for(int i=1;i<=N;i++)
  {
    delete_node(head);//头删
    show_list(head);
    sleep(1); 
  }
  return 0;
}

