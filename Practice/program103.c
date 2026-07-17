#include<stdio.h>

void CallbyAddress(int *iPtr)     // iPtr = 100, &iPtr = 200, *iPtr = 11
{
  (*iPtr)++;
}

int main()
{
  int iValue = 11;

  CallbyAddress(&iValue);       // CallbyValue(11);

  printf("Value after function call : %d\n",&iValue);      // 11
  
  return 0;
}


// Call krnara = Caller

// jeni call krto = Callie


