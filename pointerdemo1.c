#include<stdio.h>
int main()
{

  int no= 11;   //no is a variable which currently stores 11 and which is of type integer (statement reading)

  int *p= &no;  // p is a pointer variable which hold address of integer currently it holds address of no (statement reading)

  printf("%d\n",no);     //11
  printf("%d\n",&no);   //address 100
  printf("%d\n",p);     //address 100
  printf("%d\n",*p);    //11
  printf("%d\n",sizeof(no));   //4
  printf("%d\n",sizeof(p));    //8
  printf("%d\n",sizeof(*p));   //4




  
  return 0;

}