#include<stdio.h>
// ERROR due to not put #include<stdlib.h>

int main()
{
  int *Brr = NULL;
  int iLength = 0;
  int iCnt = 0;

  // Step-1: Accept the number of elements
  printf("Enter number of elements: \n");
  scanf("%d",&iLength);

  // Step-2: Allocate the memory
  Brr = (int *)malloc(iLength * sizeof(int));        // 5*4 = 20 bytes

  // Step-3: Accept the value from user
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    scanf("%d",&Brr[iCnt]);
  }

  // Step-4: Use the memory (logic / function cha call)


  // Step-5: Dealloacte the memory
  free(Brr);
  

  
  return 0;
}
