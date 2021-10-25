#include <stdio.h>
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
//时间复杂度O（N），空间复杂度O（1）
int removeElement(int *nums,int numsSize,int val)
{
  int src = 0,dst = 0;//可以用来当下标也可以当“指针”
  while(src<numsSize)
  {
    if(nums[src]!= val)
    {	    
      nums[dst] = nums[src];
      src++;
      dst++;
    }
    else
    {
      src++;
    }
  }
  return dst;
}

int main()
{
  int arr[] = {1,3,3,2,4,3,8};
  
  int ret = removeElement(arr,7,3);  
  //打印移除后的数组元素个数
  printf("%d  ",ret);
  //打印移除指定元素后的数组
  for(int i=0;i<ret;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
  return 0;
}
