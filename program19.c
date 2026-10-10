#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>


bool CheckEven(int iNo1)
{
    if((iNo1%2)==0)
    {
        return true;

    }

    else
    {
        return false;

    }

}


int main()
{

    int iValue = 0;
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d",&iValue);
     bRet = CheckEven(iValue);

     if(bRet == true)
     {
        printf("Itis Even\n");
     }

     else
     {

        printf("It is odd");
       }
    
    return EXIT_SUCCESS;
}
