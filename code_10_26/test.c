#include "slist.h"

void testslist1()
{
  SLTNode* plist = NULL;
  
  slistpushback(&plist,1);
  slistpushback(&plist,2);
  slistpushback(&plist,3);
  slistpushback(&plist,4);
  slistpushback(&plist,5);
  
  slistprint(plist);

  slistpushfront(&plist,1);
  slistpushfront(&plist,2);
  slistpushfront(&plist,3);
  
  slistprint(plist);
}

void testslist2()
{
  SLTNode* plist = NULL;
  
  slistpushfront(&plist,1);
  slistpushfront(&plist,2);
  slistpushfront(&plist,3);
  
  //slistprint(plist);//打印

  //slistpopback(&plist);//尾删
  //slistpopback(&plist);//尾删
  //slistpopback(&plist);//尾删
  //slistpopback(&plist);//尾删
   
  slistpopfront(&plist);//头删
  slistprint(plist);//打印
  
  slistpopfront(&plist);//头删
  slistprint(plist);//打印
}
void testslist3()
{
  SLTNode* plist = NULL;
  
  slistpushfront(&plist,1);
  slistpushfront(&plist,2);
  slistpushfront(&plist,3);
  slistpushfront(&plist,2);
  slistpushfront(&plist,4);
  slistpushfront(&plist,2);
  slistpushfront(&plist,2);
  
  SLTNode* pos = slistfind(plist,2);//遍历链表listprint(plist);//打印
  int i = 1;
  while(pos)
  {
    printf("第%d个pos节点%p:->%d\n",i++,pos,pos->data);
    pos = slistfind(pos->next,2);
  }
  //if(pos1 != NULL)
  //{
  //  pos2 = slistfind(pos1-next,2);
  //}
  //
  //slistprint(plist);//打印
  //修改3->30
  //find 同时有修改的作用
  pos = slistfind(plist,3);
  if(pos)
  {
    pos->data = 30;
  }
  slistprint(plist);//打印
}

void testslist4()
{
  SLTNode* plist = NULL;
  
  slistpushfront(&plist,1);
  slistpushfront(&plist,2);
  slistpushfront(&plist,3);
  slistpushfront(&plist,4);
  
  slistprint(plist);//打印
  
  SLTNode* pos = slistfind(plist,3);//遍历链表listprint(plist);//打印
  if(pos)
  { 
    slistinsert(&plist,pos,30);
  }
  slistprint(plist);//打印

  pos = slistfind(plist,1);//遍历链表listprint(plist);//打印
  if(pos)
  { 
    slistinsert(&plist,pos,10);
  }
  slistprint(plist);//打印
  
  pos = slistfind(plist,4);//遍历链表listprint(plist);//打印
  if(pos)
  { 
    slistinsert(&plist,pos,40);
  }
  slistprint(plist);//打印
}
  
int main()
{
  //testslist1();  
  //testslist2();
  //testslist3();
  testslist4();
  return 0;
}
