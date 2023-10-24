//program for calculating one number raised to another number
#include <stdio.h>
int main()
{


int base,exp,i,result=1;
    printf("Enter the base :- ");
    scanf("%d",&base);
    printf("Enter the exponent :- ");
    scanf("%d",&exp);

for (i=1;i<=exp;i++)

    result=result*base;
        printf("%d raised to the power %d is equal to:- %d",base,exp ,result);
return 0;
}
