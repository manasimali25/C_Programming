#include<stdio.h>

void DisplayDigits(int iNo)    // iValue = iNo = 751
{
  int iDigit = 0;
  
  while(iNo > 0)
  {
    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo / 10;
   
  }

}


int main()
{
  int iValue = 0;        // input = 751
  printf("Enter number : \n");
  scanf("%d",&iValue);

  DisplayDigits(iValue);

  return 0;
}
