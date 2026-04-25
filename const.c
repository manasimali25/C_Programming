#include<stdio.h>
int main()
{
  int i=10;
  const int j=10;
  
  i++; //allowed because it is not constant (i=i+1)
  j++; //not allowed becuase it is constant (j=j+1)
  
  
  return 0;

}