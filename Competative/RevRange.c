// Question: Write a program which accept range from user and display all numbers in between that range in reverse order. 

// Input: 24 30
// Output: 30 29 28 27 26 25 24 

// Input: 80 12
// Output: Invalid range

// Input: 10 10
// Output: 10

// Input: -5 2
// Output: 2 1 0 -1 -2 -3 -4 -5  


#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int i = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(i = iEnd; i >= iStart; i--)
    {
        printf("%d\t", i);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}


// Time Complexity : O(n)
