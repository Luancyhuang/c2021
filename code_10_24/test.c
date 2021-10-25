#include "seqlist.h"
void testseqlist1()
{
  SL sl;
  //对结构体名为sl的结构体初始化
  seqlistinit(&sl);
  //依次插入四个数据
  seqlistpushback(&sl,1);
  seqlistpushback(&sl,2);
  seqlistpushback(&sl,3);
  seqlistpushback(&sl,4);
  seqlistpushback(&sl,5);
  
  seqlistprint(&sl);
}

int main()
{
  testseqlist1();
  

  return 0;
}
