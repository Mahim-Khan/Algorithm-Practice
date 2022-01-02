#include<stdio.h>
#include<math.h>
int main()
{
    int a=25000,sum1,sum2,sum3,total;
    printf("Mr. karim's monthly salary is 25000\n");
    sum1=(25000*4/100);
    printf("Bank provides 4%% interest monthly.\n");
    printf("The monthly interest is : %d\n",sum1);
    sum2=(25000*12);
    printf("The amount of yearly salary is : %d\n",sum2);
    sum3=(300000*4/100);
    printf("total yearly interest : %d\n",sum3);
    total=sum2+sum3+2000;
    printf("For impressive performance salary increment of 2000\n");
    printf("The total amount of reserved money on December 2017 : %d\n",total);
    return 0;

}


