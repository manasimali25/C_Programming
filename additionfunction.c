#include<stdio.h>

int addition(int no1, int no2)
{
  int ans=0;
  ans= no1 +no2;  //bussiness logic 
  return ans;
}

int main()
{
  int result= 0;
  result= addition(11,10);
  printf("Addition is: %d\n",result);
  return 0;
}