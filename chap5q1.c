#include<stdio.h>
/*program for taking 10 inputs from user to calculate the overpay of ten workers as per the criteria
given in the question of chap 5 question */
int main()
{
    int hr=1,op,i;
    for(i=1;i<=10;)//for asking input 10 times

        {printf("Enter the number of hours worked :-  ");
        scanf("%d",&hr);
    if(hr>40)
        {op=(hr-40)*12;
        printf("Overpay for working %d hours is :- Rs %d \n\n",hr,op);}
    else
        printf("overpay is not due as you haven't worked for more than 40 hours\n\n");}
i++;

    return 0;

}
