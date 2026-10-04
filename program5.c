#include<stdio.h>

int main()
{
int ivalue1 = 0, ivalue2 = 0, iResult = 0;
printf("Enter First number : \n");
scanf("%d",&ivalue1);
printf("Enter Second number : \n");
scanf("%d",&ivalue2);

iResult  = ivalue1 + ivalue2; //Business logic
printf("Addition is :%d\n",iResult);

return 0;
}
