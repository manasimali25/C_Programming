#include<stdio.h>

int addition(int no1, int no2)
{
  int ans=0;
  ans= no1 +no2;  //bussiness logic 
  return ans;
}

int main()
{
  int result= 0, a=11, b=10;
  result= addition(a,b);
  printf("Addition is: %d\n",result);
  return 0;
}