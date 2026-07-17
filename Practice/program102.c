#include<stdio.h>

void CallbyValue(int iNo)     // iNo = 11;
{
  iNo++;
}

int main()
{
  int iValue = 11;

  CallbyValue(iValue);       // CallbyValue(11);

  printf("Value after function call : %d\n",iValue);      // 11
  
  return 0;
}

