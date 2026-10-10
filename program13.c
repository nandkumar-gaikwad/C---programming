#include<stdio.h>
#include<stdlib.h>

int Addition(
    
               int iNo1,    //First input
               int iNo2     //Second input
            )
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
    
}


int main()
{
    int ivalue1 = 0, ivalue2 = 0, iResult = 0;
    printf("Enter First number : \n");
    if(scanf("%d",&ivalue1) !=1)
    {
        fprintf(stderr,"unable to proceedd as INput is invalid\n");

        return EXIT_FAILURE;
    }
    printf("Enter Second number : \n");
    if(scanf("%d",&ivalue2) !=1)
    {
        fprintf(stderr,"unable to proceedd as INput is invalid\n");

        return EXIT_FAILURE;
    }
    iResult = Addition(ivalue1,ivalue2);
    printf("Addition is :%d\n",iResult);

    return EXIT_SUCCESS;
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