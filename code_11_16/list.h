#pragma once 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int LTDataType; 
typedef struct ListNode
{
  struct ListNode* prev;
  struct ListNode* next;
  LTDataType data;
}ListNode;

//初始化
ListNode* ListInit();
void ListPrint(ListNode* phead);
void ListDestroy(ListNode* phead);
void ListPushBack(ListNode* phead,LTDataType x);
void ListPushFront(ListNode* phead,LTDataType x);
void ListPopBack(ListNode* phead);
void ListPopFront(ListNode* phead);
ListNode* ListFind(ListNode* phead,LTDataType x);
void ListInsert(ListNode* pos,LTDataType x);
void ListErase(ListNode* pos);

