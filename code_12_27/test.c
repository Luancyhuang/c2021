#include <stdio.h>

/*int main()
{
  int arr[] = {1,2,3,4,5};
  short* p = (short*)arr;
  
  for(int i=0;i<4;i++)
  {
    *(p+i) = 0;  
  }

  for(int i=0;i<5;i++)
  {
    printf("%d ",arr[i]);
  }
  
  return 0;
}*/

/*int main()
{
  int a = 0x11223344;
  char* pc = (char*)&a;
  *pc = 0;
  printf("%x\n",a);
  return 0;
}*/
#include <assert.h>
/*void print(const int* p,int num)
{
  assert(p);

  for(int i=0;i<num;i++)
  {
    printf("%d ",*(p+i));
  }
}

int main()
{
  int arr[] = {1,2,3,4,5};
  int sz = sizeof(arr)/sizeof(arr[0]);
  
  print(arr,sz);

  return 0;
}*/

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2+22+222+2222+22222

int main()
{
  int a = 0;
  int n = 0;
  int k = 0;
  int sum = 0;
  scanf("%d%d",&a,&n);

  for(int i=0;i<n;i++)
  {
    k = k*10+a;
    sum += k;  
  }

  printf("%d\n",sum);

  return 0;
}
