#include <stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter any whole number :- ");
    scanf("%d",&num);
    if (num>1)
        {
            for (i=1;i<=num;i++)
        fact=fact*i;
    printf("Factorial of %d is :- %d",num,fact);
    }
 else if (num==0||num==1)
    {
        printf("Factorial of %d is :- 1",num);
        }
if (num <0)
    printf("number is not a whole number");
return 0;
}
