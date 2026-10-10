#include<stdio.h>
#include<stdlib.h>


void CheckEven(int iNo1)
{
    if((iNo1% 2)==0)
    {
        printf("it is even number\n");

    }

    else
    {
        printf("it is odd  number");

    }

}


int main()
{

    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);
    CheckEven(iValue);

    
    return EXIT_SUCCESS;
}