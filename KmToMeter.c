// Question: Write a program which accepts distance in kilometers and convert it into meter.
// 1km = 1000m

// Input: 5
// Output: 5000

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;      // 1km = 1000m

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is : %d",iRet);

    return 0;
}

// Time Complexity: O(1)