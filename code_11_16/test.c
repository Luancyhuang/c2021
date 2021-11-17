#include "list.h"

void TestList1()
{
  ListNode* plist = ListInit();
  
  ListPushBack(plist,1);
  ListPushBack(plist,2);
  ListPushBack(plist,3);
  ListPushBack(plist,4);
  
  ListPrint(plist);
  
  ListPushFront(plist,0);
  
  ListPrint(plist);

  ListPopFront(plist);
  
  ListPrint(plist);
  
  ListPopBack(plist);

  ListPrint(plist);
  
  ListDestroy(plist);
}

void TestList2()
{
  ListNode* plist = ListInit();
  
  ListPushBack(plist,1);
  ListPushBack(plist,2);
  ListPushBack(plist,3);
  ListPushBack(plist,4);
  ListPrint(plist);
  
  ListNode* pos = ListFind(plist,3);
  if(pos)
  {
    pos->data *= 10;
    printf("找到了\n");
  }
  else
  {
    printf("没有找到\n");    
  }
  ListPrint(plist);

  ListInsert(pos,300);
  ListPrint(plist);
  
  ListErase(pos);
  ListPrint(plist);
}

int main()
{
  //TestList1();
  TestList2();
  
  return 0;
}
