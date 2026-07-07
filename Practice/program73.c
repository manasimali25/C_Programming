// INPUT = 5
// OUTPUT = 1 2 3 4 5

#include<stdio.h>

int main()
{
  int iCnt = 0;

  iCnt = 1;
  while(iCnt <= 5)
  {
    printf("%d\t",iCnt);
    iCnt++;
  }

  printf("\n");            // next time path khali javav mhnun compile sathi


  return 0;
}
