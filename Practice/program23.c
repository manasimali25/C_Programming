#include<stdio.h>
#define AGE_INVALID -1          // user define MACRO

int CalculateTicketPrice(int iAge)        
{
  if(iAge < 0)          // input filter
  {
    return AGE_INVALID;
  }   

  if(iAge >= 0 && iAge <= 5)
  {
    return 0;         
  }
  else if(iAge >= 6 && iAge <= 18)
  {
    return 500;       
  }
  else if(iAge >= 19 && iAge <= 50)
  {
    return 900;       
  }
  else
  {
    return 400;       
  }
}


int main()         
{
  int iValue = 0;
  int iRet = 0;

  printf("Please enter your Age to calculate ticket price : ");
  scanf("%d",&iValue);

  iRet = CalculateTicketPrice(iValue);

  if(iRet == AGE_INVALID)
  {
    printf("Please enter positive Age\n");
  }

  else
  {
    printf("Your ticket price will be %d rupees\n", iRet);
  }

  return 0;
}



// DRY policy - Don't Run Yourself (jo code ekda lihla to parat parat use naka kru)

