 /////////////////////////////////////////////////////////
 ///
 /// Include required header files
 ///
 /////////////////////////////////////////////////////////
 #include<stdio.h>

 //////////////////////////////////////////////////////
 ///
 /// Function name : AddTwoNumbers
 /// Input :         float,float
 /// Output :        float
 /// Description:    performs addition of two floats
 /// Date:           08/05/2026
 /// Author:         Manasi Mali
 ///
 /////////////////////////////////////////////////////
 float AddTwoNumbers(float fNo1,   //First Input 
                     float fNo2    //Second Input
                    )
 {
    float fAns = 0.0f;      //Variable to store result
    fAns= fNo1+fNo2;        //Perform Addition 
    return fAns;     
 }
/////////////////////////////////////////////////////////
///
/// Application to perform Addition of two float values
///
/////////////////////////////////////////////////////////
int main()
{
    
    float fvalue1 =0.0f;      //To store first input
    float fvalue2 =0.0f;      //To store second input
    float fresult =0.0f;      //To store the result

    printf("Enter First Number \n");
    scanf("%f",&fvalue1);

    printf("Enter Second Number \n");
    scanf("%f",&fvalue2);

    fresult=AddTwoNumbers(fvalue1,fvalue2); 

    printf("The Final Addition is %f \n",fresult);

    return 0;
}
/////////////////////////////////////////////////////////
///
/// Input: 10.0  11.0
/// Output : 21.0
///
/////////////////////////////////////////////////////////
