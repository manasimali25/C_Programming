#include<stdio.h>

// function definition
int CalculateTicketPrice(int iAge)        //helper function will be always SERVER
{
  if(iAge >= 0 && iAge <= 5)
  {
    return 0;          //0 is the value means ticket is free (0 rupees == free)
  }
  else if(iAge >= 6 && iAge <= 18)
  {
    return 500;       // 500 rupees
  }
  else if(iAge >= 19 && iAge <= 50)
  {
    return 900;       // 900 rupees
  }
  else
  {
    return 400;       // 400 rupees
  }
}


int main()         //main function will be always CLIENT
{
  int iValue = 0;
  int iRet = 0;

  printf("Please enter your Age to calculate ticket price : ");
  scanf("%d",&iValue);

  iRet = CalculateTicketPrice(iValue);

  printf("Your ticket price will be %d rupees\n", iRet);


  return 0;
}