#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int HPDataType;

typedef struct Heap
{
  int *a;
  int size;
  int capacity;
}HP;

void HeapInit(HP* hp);//初始化
void HeapDestroy(HP* hp);
void HeapPush(HP* hp,HPDataType x);
void HeapPOP(HP* hp);
void HeapPrint(HP* hp);

