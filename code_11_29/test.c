#include <stdio.h>
#include <unistd.h> 

int main()
{
  FILE* pf = fopen("test.txt","w");
  fputs("abcdef",pf);//先将代码放在输出缓冲区
  printf("睡眠10秒,已经开始写数据了，打开test.txt文件，发现文件没有内容\n");
  sleep(10);
  printf("刷新缓冲区\n");
  fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
  //fflush 在高版本的VS 上不能使用了
  printf("再睡眠10秒,此时，再次打开test.txt文件，文件有内容了\n");
  sleep(10);
  fclose(pf);
  //fclose在关闭文件的时候，也会刷新缓冲区
  pf = NULL;
  return 0;
}
