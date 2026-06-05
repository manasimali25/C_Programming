// Question: Write a program which accepts height and width of recatngle from user and calculate its area. 
// Area = Height * Width

// Input: 5.3  9.78
// Output: 51.834


#include<stdio.h>

float RectArea(float fHeight, float fWidth)
{
    float fArea = 0.0f;

    fArea = fHeight * fWidth;

    return fArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter height : \n");
    scanf("%f",&fValue1);

    printf("Enter width : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area is : %lf",dRet);

    return 0;
}


// Time Complexity : O(1)
