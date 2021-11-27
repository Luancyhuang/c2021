#include <stdio.h>

int main()
{
  //1.打开文件
  FILE* pf = fopen("data.txt","r");
  if(pf == NULL)
  {
    perror("fopen");
    return -1;
  }
  //2.读文件
  //随机读写
  //int ch = fgetc(pf);
  //printf("%c\n",ch);
  fseek(pf,2,SEEK_SET);
  int ch1 = fgetc(pf);
  printf("%c\n",ch1);
  
  fseek(pf,-2,SEEK_CUR);
  int ch2 = fgetc(pf);
  printf("%c\n",ch2);
  //计算文件指针相对于起始位置的偏移量
  int ret = ftell(pf);
  printf("%d\n",ret);
  //文件指针回来
  rewind(pf);
  int ch3 = fgetc(pf);
  printf("%c\n",ch3);
  //3.关闭文件
  fclose(pf);
  pf = NULL;
  return 0;
}
