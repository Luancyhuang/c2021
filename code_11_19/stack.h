#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef int STDataType;

typedef struct stack
{
  STDataType* a;
  int top;
  int capacity;
}ST;

void StackInit(ST* ps);
void StackDestroy(ST* ps);
//入栈
void StackPush(ST* ps,STDataType x);
//出栈
void StackPop(ST* ps);
STDataType StackTop(ST* ps);
bool StackEmpty(ST* ps);
int StackSize(ST* ps);


