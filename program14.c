#include "Header.h"


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