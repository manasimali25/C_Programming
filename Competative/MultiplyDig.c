// Question: Write a program which accepts number from user and return multiplication of all digits.

// Input: 9440
// Output: 144

// Input: -1018
// Output: 8

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }

        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}

// Time Complexity : O(n)
