#include "btree.h"


int main()
{
  BTNode* A = (BTNode*)malloc(sizeof(BTNode));
  A->data = 'A';
  A->left = NULL;
  A->right = NULL;
  
  BTNode* B = (BTNode*)malloc(sizeof(BTNode));
  B->data = 'B';
  B->left = NULL;
  B->right = NULL;

  
  BTNode* C = (BTNode*)malloc(sizeof(BTNode));
  C->data = 'C';
  C->left = NULL;
  C->right = NULL;
  
  BTNode* D = (BTNode*)malloc(sizeof(BTNode));
  D->data = 'D';
  D->left = NULL;
  D->right = NULL;
  
  BTNode* E = (BTNode*)malloc(sizeof(BTNode));
  E->data = 'E';
  E->left = NULL;
  E->right = NULL;
  
  A->left = B;
  A->right = C;
  B->left = D;
  B->right = E;

  PrevOrder(A);
  printf("\n");

  return 0;
}
