#include <stdio.h>
#include <string.h>
void welcome()
{
  printf("###############\n");
  printf("#1.play 2.exit#\n");
  printf("###############\n");
}
void getgift()
{
  printf("恭喜你获得黄金大礼包一份\n");

}
void login(void (*welcome)(),void (*getgift)())	
{
#define NAME "小学生"
#define PASSWD "12345"
  char name[32] = {0};
  char passwd[32] = {0};
  printf("Please Enter Your Name#");
  scanf("%s",name);
  printf("Please Enter Your Passwd#");
  scanf("%s",passwd);
  if(strcmp(name,NAME) == 0 && strcmp(passwd,PASSWD) == 0)
  {
    welcome();
    getgift();
  }
}
int main()
{
  login(welcome,getgift);
  return 0;
}
