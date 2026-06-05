// Question: Write a program which accept number from user and display its table.

// Input: 2
// Output: 2 4 6 8 10 12 14 16 18 20

// Input: -3
// Output: 3 6 9 12 15 18 21 24 27 30 

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}


// Time Complexity : O(n)
