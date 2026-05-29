// Question: Write a program which accepts number from user and display its multiplication of factors.

// Input: 12
// Ouput: 144  (1 * 2 * 3 * 4 * 6)

// Input: 13
// Ouput: 1    (1)

// Input: 10
// Ouput: 10   (1 * 2 * 5)

#include<stdio.h>

int MultFact(int iNo)
{
  int iCnt = 0;
  int iMult = 1;

  for(iCnt = 1; iCnt <= iNo/2; iCnt++)
  {
    if(iNo % iCnt == 0)
    {
      printf("%d ",iCnt);
      iMult = iMult * iCnt;
    }
  }

  return iMult;

}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number: \n");
  scanf("%d",&iValue);

  iRet = MultFact(iValue);

  printf("\nMultiplication of Factors is: %d",iRet);

  return 0;
}


// Time Complexity : O(n/2)