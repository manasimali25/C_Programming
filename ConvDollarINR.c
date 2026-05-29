// Question: Accept amount in US Dollar and return its corresponding value in Indian currency 
// Consider 1$ as 70 rupees 

// Input: 3
// Output: 270

// Input: 1200
// Output: 84000

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iCnt = 0;
    int iAns = 0;
    int iRupee = 70;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iAns = iAns + iRupee;
    }

    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}

// Time Complexity : O(1)