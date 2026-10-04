#include<stdio.h>

int main()
{
int ivalue1, ivalue2, iResult;
printf("Enter First number : \n");
scanf("%d",&ivalue1);
printf("Enter Second number : \n");
scanf("%d",&ivalue2);

iResult  = ivalue1 + ivalue2; //Business logic
printf("%d\n",iResult);

return 0;
}
