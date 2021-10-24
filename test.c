#include <stdio.h>
//给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
//进阶：尽可能想出更多的解决方案，至少有三种不同的方法可以解决这个问题。你可以使用空间复杂度为 O(1) 的 原地 算法解决这个问题吗？

void reverse(int *nums,int left,int right)//对一段区间进行逆置
{
  while(left<right)
  {
    int tmp = nums[left];
    nums[left] = nums[right];
    nums[right] = tmp;
    left++;
    right--;//逆置算法
  }
}

void rotate(int *nums,int numsSize,int k)
{  
  //1.如果k==numsSize时，数组旋转回来到原点;2.如果k>numsSize时，数组旋转又到到k的下标处。
  if(k >= numsSize)
    k %= numsSize;
  //前n-k个数逆置
  reverse(nums,0,numsSize-k-1);
  //后k个数逆置
  reverse(nums,numsSize-k,numsSize-1);
  //整体逆置
  reverse(nums,0,numsSize-1);
}

void print(int *arr,int num)
{
  for(int i=0;i<10;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}

int main()
{
  int arr[10] = {0};

  for(int i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
  }

  rotate(arr,10,3);
  print(arr,10);
  return 0;
}
