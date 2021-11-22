#include <stdio.h>

//直接插入排序的基础上的优化
//1.先进行预排序，让数组接近有序
//2.直接插入排序
void ShellSort(int* a,int n)
{
  int gap = n;
  while(gap>1)
  {
    gap/=2;
    for(int i=0;i<n-gap;i++)
    {	    
      int end = i;
      int tmp = a[end+gap]; 
      while(end >= 0)
      {
        if(a[end] > tmp)
        {
          a[end+gap] = a[end];
          end -= gap;
        }
        else
        {
          break;
        }
      }
      a[end+gap] = tmp;
    }
  }
}

void PrintSort(int* a,int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);  
  }
  printf("\n");
}

void TestInsertSort()
{
  int a[] = {3,0,8,5,1,2,9,7,4,6};
  ShellSort(a,sizeof(a)/sizeof(int));
  PrintSort(a,sizeof(a)/sizeof(int));
}

int main()
{
  TestInsertSort();
  return 0;
}
