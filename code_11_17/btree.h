#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef char BTDdatatype;

typedef struct BinaryTreeNode
{
  struct BinaryTreeNode* left;
  struct BinaryTreeNode* right;
  BTDdatatype data;
}BTNode;

void PrevOrder(BTNode* root);
void InOrder(BTNode* root);
void PostOrder(BTNode* root);

