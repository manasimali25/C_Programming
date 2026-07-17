#include<stdio.h>

void Display(int *iPtr)
{ 
  printf("value of iPtr: %d\n",iPtr);      // Arr cha add
}

int main()
{
  int Arr[] = {10,20,30,40,50};

  printf("Base Address of Arr : %d\n",Arr);      // Arr cha add
  Display(Arr);
  
  return 0;
}



