#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;

typedef struct slistnode
{
  SLTDataType data;
  struct slistnode* next;
}SLTNode;

void slistprint(SLTNode* phead);
void slistpushback(SLTNode** pphead,SLTDataType x);
void slistpushfront(SLTNode** pphead,SLTDataType x);
void slistpopback(SLTNode** pphead);
void slistpopfront(SLTNode** pphead);
//默认是在pos位置之前插入数据
SLTNode* slistfind(SLTNode* phead,SLTDataType x);
void slistinsert(SLTNode** phead,SLTNode* pos,SLTDataType x);
void slisterase(SLTNode** phead,SLTNode* pos);

void slistdestory(SLTNode** pphead);



