#include<stdio.h>
int main()
{

  int arr[4]= {10,20,30,40};     // member initialisation list with size (technique 1)

  int brr[]= {11,12,13,14};     // member initialisation list without size (technique 1)

  int crr[4];                  //member by member initialisation list  (technique 2)

  crr[0]=101;
  crr[1]=102;
  crr[2]=103;
  crr[3]=104;

  printf("%d\n",arr[0]);
  printf("%d\n",brr[0]);
  printf("%d\n",crr[0]);


  
  return 0;

}