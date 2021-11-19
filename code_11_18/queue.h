#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef int QDataType;

typedef struct QueueNode
{
  struct QueueNode* next;
  QDataType data;
}QNode;

typedef struct Queue
{
  QNode* head;
  QNode* tail;
}Queue;

void QueueInit(Queue* pq);
void QueueDestroy(Queue* pq);
//队尾入
void QueuePush(Queue* pq,QDataType x);
//队头出
void QueuePop(Queue* pq);
//取队尾和队头的数据
QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);

int QueueSize(Queue* pq);

bool QueueEmpty(Queue* pq);

