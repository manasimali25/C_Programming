// photo (11:23)

#include<stdio.h>

int Summation(int Arr[], int iSize)    
{
  int iCnt = 0;
  int iSum = 0;

  printf("Elemnts is: \n");
  for(iCnt = 0; iCnt < iSize; iCnt++)   
  {
    iSum = iSum + Arr[iCnt];
  }
  
  return iSum;

    
}

int main()
{
  int iLength = 4;
  int Brr[iLength];
  int iRet = 0;
  
  int iCnt = 0;

  printf("Enter the elements: \n");
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    scanf("%d",&Brr[iCnt]);
  }
  
  


  iRet = Summation(Brr,iLength);   

  printf("Addition of all elemnts: %d\n", iRet);
  
  return 0;
}
