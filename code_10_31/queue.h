#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QDataType;


typedef struct QueueNode
{
  struct QueueNode* next;
  QDataType data;
}QueueNode;

typedef struct Queue
{
  QueueNode* head;
  QueueNode* tail;
}Queue;

void QueueInit(Queue* pq);
void QueueDestroy(Queue* pq);
void QueuePush(Queue* pq,QDataType x);//对尾入数据
void QueuePop(Queue* pq);//队头删除数据

QDataType QueueFront(Queue* pq);//取队头的数据
QDataType QueueBack(Queue* pq);//取队尾的数据

int QueueSize(Queue* pq);//队中的数据
bool QueueEmpty(Queue* pq);//判断队是否为空

























