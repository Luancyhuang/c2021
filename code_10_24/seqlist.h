#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef int sldatatype;
//静态顺序表
typedef struct seqlist
{
  sldatatype *a;
  int size;//表示数组存储了多少个元素（不是字节大小）
  int capacity;//数组实际能存数据的空间容量是多大，单位都是个数！不是字节
}SL;

//接口函数 --命名风格是跟着STL走的，方便后续学习STL

void seqlistprint(SL *ps);
void seqlistinit(SL *ps);
//静态特点，如果满了，就不让插入！缺点：给多大的空间合适，很难确定！
//N给小了，不够用；N给大了，空间有点浪费！
void seqlistpushback(SL *ps,sldatatype x);
void seqlistpopback(SL*ps);
void seqlistpushfront(SL*ps,sldatatype x);
void seqlistpopfront(SL*ps);
