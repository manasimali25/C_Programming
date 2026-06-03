/*
  Start
    Accept number as no

    IF no is completely divisible by 2 
      then print EVEN
      
    OTHERWISE 
      print ODD

    Stop



    Start

      Accept number as no
      divide no by 2

      IF remainder is 0 
        then print EVEN

      OTHERWISE
        print ODD

    Stop
*/




#include<stdio.h>
int main()
{
  int iValue= 0;
  int iRemainder=0;

  printf("Enter Number: \n");
  scanf("%d",&iValue);

  iRemainder = iValue % 2;

  if(iRemainder == 0)
  {
    printf("Number is EVEN\n");
  }
  else
  {
    printf("Number is ODD\n");
  }



  return 0;
}