#include <stdio.h>
//#define XNAME(n) student##n
#define CONT(base,n) base##e##n
int main()
{
  printf("%lf\n",CONT(3.14,2));
 // XNAME(1);
 // XNAME(2);
 // XNAME(3);
 // XNAME(4);
 // XNAME(5);
  return 0;
}
  
