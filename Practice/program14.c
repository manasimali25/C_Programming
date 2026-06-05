#include<stdio.h>

int CheckEvenOdd(int iNo)
{
  int iRemainder = 0;

  iRemainder = iNo % 2;

  return iRemainder;
}


int main()
{
  int iValue = 0;
  int iRet = 0;
 

  printf("Enter number to check whether it is EVEN or ODD : ");
  scanf("%d",&iValue);

  iRet = CheckEvenOdd(iValue);

  if(iRet == 0)
  {
    printf("\n%d is EVEN\n", iValue);
  }
  else
  {
    printf("%d is ODD\n", iValue);
  }

  CheckEvenOdd(iValue);



  return 0;
}