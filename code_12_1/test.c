#include <stdio.h>
#include <assert.h>

void* MyMemMove(void* dest,const void* src,size_t count)
{ 
  assert(dest);
  void* ret = dest;
  
  if(dest < src)
  {
    //前->后
    while(count--)
    {
      *(char*)dest = *(char*)src;
      dest = (char*)dest+1;
      src = (char*)src+1;
    }
  }
  else
  {
    //后->前
    while(count--)
    {
      *((char*)dest + count) = *((char*)src + count);
    }
  }

  return ret;
}

int main()
{
  int arr[10] = {0,1,2,3,4,5,6,7,8,9};
  
  MyMemMove(arr+2,arr,16);
  //MyMemMove(arr,arr+2,16);
  
  return 0;
}
