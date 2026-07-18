#include<stdio.h>

void Display(int Arr[], int iSize)    // iSize = 4
{
  int iCnt = 0;

  for(iCnt = 0; iCnt < iSize; iCnt++)   
  {
    printf("%d\n",Arr[iCnt]);
  }

    
}

int main()
{
  int iLength = 4;
  int Brr[iLength] = {10,20,30,40};         // ERROR bcoz Brr mdhe size ha variable ch naav dila tr initialize nhi kru shkt ie. 10,20,etc.

  Display(Brr,iLength);    // not allowed
  
  return 0;
}



