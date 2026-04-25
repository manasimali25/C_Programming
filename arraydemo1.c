#include<stdio.h>
int main()
{

  char cArr[4]={'A','B','C','D'};
  int iArr[4]={10,20,30,40};
  float fArr[4]={11.0f,12.0f,13.0f,14.0f};
  double dArr[4]={23.3855,56.87475,87.6388,45.272834};

  printf("size of character array: %lu\n",sizeof(cArr)); //4
  printf("size of integer array: %lu\n",sizeof(iArr));   //16
  printf("size of float array: %lu\n",sizeof(fArr));     //16
  printf("size of double array: %lu\n",sizeof(dArr));    //32
  
  return 0;

}