#include"header.h"
#include<stdio.h>
void main()
{
int a,b,result;
printf("Enter the numbers");
scanf("%d %d",&a,&b);
printf("Enter choice:(1.sum 2.difference 3.multiply 4.reminder 5.coeficient)");
scanf("%d",&result);
switch (result)
{
    case 1:sum();
    break;
    case 2:sub();
    break;
    case 3:multy();
    break;
    case 4:reminder();
    break;
    case 5:quotient();
    break;
}
}
