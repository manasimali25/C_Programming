// Starting of Array and Pointer topic

#include<stdio.h>

int main()
{
  int Arr[] = {10,20,30,40,50};

  // All are same in o/p
  printf("%d\n",Arr);
  printf("%d\n",&Arr);
  printf("%d\n",&Arr[0]);      

  return 0;
}