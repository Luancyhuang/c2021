//memmove重叠拷贝
#include <stdio.h>
//#include <string.h>
#include <assert.h>
void *my_memmove(void *dest, const void *src, size_t count)
{ 
  assert(dest && src);
  void *ret = dest;
  if(dest<src)
  {
    while(count--)
    {
      *(char*)dest = *(char*)src;
      *(char*)++dest;
      *(char*)++src;
    }
  }
  else
  {
    while(count--)
    {
      *((char*)dest+count) =* ((char*)src+count);
    }
  }
  return ret;
}
int main()
{
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  my_memmove(arr+2,arr,20);
  int i = 0; 
  for(i=0;i<10;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}
