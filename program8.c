#include<stdio.h>
////////////////////////////////////////////////////////////////
//    Function Name : Addition 
//      Input :       Integer ,Integer
//     Output :        Integer
    //  Description :   Performs addition
    //  Date :          04/10/2026
      //Author :        Gaikwad Nandkumar vinayak
//
//
//
//
//
////////////////////////////////////////////////


int Addition(int iNo1,int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
    
}
////////////////////////////////////////////////
// Entery point of application
//

int main()
{
    int ivalue1 = 0, ivalue2 = 0, iResult = 0;
    printf("Enter First number : \n");
    scanf("%d",&ivalue1);
    printf("Enter Second number : \n");
    scanf("%d",&ivalue2);
    iResult = Addition(ivalue1,ivalue2);
    printf("Addition is :%d\n",iResult);

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////
//        Step 5 : Test the program
//        Tsested test cases
//         Input1 Input2 Output
//         10       11    21
//          0       11    
//         20       -5    15
//         -20      -7    -27
/////////////////////////////////////////////////////////////////////////////////////////