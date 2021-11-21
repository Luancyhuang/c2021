#include <stdio.h>

//假设用升序，降序就是反过来
//插入排序
void InsertSort(int* a,int n)
{
  //假设[0,end]有序
  //把end+1位置的值插入进去
  //让[0,end+1]有序  
  for(int i=0;i<n-1;i++)
  {	  
    int end = i;//end 是变化的
    int tmp = a[end + 1];//把end后面一个值保存起来
    while(end >= 0)
    {
      if(a[end]>tmp)
      {
        a[end+1] = a[end];
        end--;    
      }
      else
      {
        break;
      }
    }
    a[end+1] = tmp;
  }
}

void PrintArray(int* a,int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);  
  }
  printf("\n");
}

void TestInsertSort()
{
  int a[] = {3,5,8,7,4,1,9};
  InsertSort(a,sizeof(a)/sizeof(a[0])); 
  PrintArray(a,sizeof(a)/sizeof(a[0]));
}

int main()
{
  TestInsertSort();  
  
  return 0;
}
