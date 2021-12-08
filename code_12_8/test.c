#include <stdio.h>

/*int test()
{
  if(1)
  {
    printf("hehe\n");
    return 0;  
  }
  printf("haha\n");
  return -1;
}

int main()
{
  int ret = test();
  

  return 0;
}*/


/*int main()
{
  int num = 0;
  scanf("%d",&num);

  if(num % 2 == 1)
  {
    printf("是奇数\n");  
  }
  else
  {
    printf("是偶数\n");  
  }

  return 0;
}*/

/*int main()
{
  for(int i = 1; i <= 100; i++)
  {
    if(i % 2 == 1)
    {
      printf("%d ",i);//是奇数就打印出来
    }
  }
  printf("\n");

  return 0;
}*/

/*int main()
{
  int i = 1;
  while(i <= 100)
  {
    printf("%d ",i);
    i += 2;
  }
  printf("\n");

  return 0;
}*/


/*int main()
{
  int day = 0;
  scanf("%d",&day);
  switch(day)
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      printf("workday\n");
      break;
    case 6:
    case 7:
      printf("weekend\n");
      break;	   
    default:
      printf("输入有误，请重新输入\n");
      break; 
  }

  return 0;
}*/


/*int main()
{
  int day = 1;
  
  while(day <= 100)
  {
    printf("day=%d\n",day);
    day++;
  }

  return 0;
}*/

/*int main()
{
  int i = 0;
  
  while(i <= 10)
  {
    if(i == 5)
       break;//永久地终止循环
    printf("%d ",i);
    i++;  
  }
  return 0;
}*/

/*int main()
{
  int i = 0;
  
  while(i <= 10)
  {
    i++;
    if(i == 5)
      continue;//会跳过本次循环后面执行的代码，回到while 判断的地方
    printf("%d ",i);      
  }
  return 0;
}*/



int main()
{
  //1.返回的字符，本质是字符也是ASCII码值，是整数
  //2.getchar函数不仅仅是返回正常字符，还会返回EOF，所以放在整型变量中
  int ch = 0;
  while((ch = getchar()) != EOF)//getchar 读取失败时候返回EOF/-1
  {
    if(ch < '0' || ch > '9')
	    continue;
    putchar(ch); 
  }

  return 0;
}




