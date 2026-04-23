#include<stdio.h>

int addition(int no1, int no2)
{
  int ans=0;
  ans= no1 +no2;  //bussiness logic 
  return ans;
}

int main()
{
  int result= 0, a=0 , b=0;

  printf("Enter first number: \n");
  scanf("%d",&a);

  printf("Enter second number: \n");
  scanf("%d",&b);

  result= addition(a,b);
  printf("Addition is: %d\n",result);
  return 0;
}