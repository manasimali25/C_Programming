#include<stdio.h>
#include<stdbool.h>    


bool CheckEvenOdd(int iNo)
{

  if ((iNo % 2) == 0)
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

  if(bRet)
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