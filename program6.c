#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
    
}

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
