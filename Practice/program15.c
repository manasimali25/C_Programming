#include<stdio.h>
#include<stdbool.h>     //boolean nava chi concept or datatype, is not in C


bool CheckEvenOdd(int iNo)
{
  int iRemainder = 0;

  iRemainder = iNo % 2;

  if (iRemainder == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}


int main()
{
  int iValue = 0;
  bool bRet = false;
 

  printf("Enter number to check whether it is EVEN or ODD : ");
  scanf("%d",&iValue);

  bRet = CheckEvenOdd(iValue);

  if(bRet == true)
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