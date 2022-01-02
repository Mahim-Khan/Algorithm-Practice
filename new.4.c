#include<stdio.h>
int main()
{
     int b,n;
    printf("Enter the array size\n");
    scanf("%d",&b);
    int a[b],i;
     printf("Enter the array numbers\n");
     for(i=0; i<b; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter index number\n");
    scanf("%d",&n);

    int c;
    printf("Enter the index value\n");
    scanf("%d",&c);
    if(a[n]==c)
    {


    for(i=0;i<b;i++)
    {
        printf("the array is : %d\n",a[i]);
    }
    }
    else
    {
        a[n]=c;

         for(i=0;i<b;i++)
    {
        printf("the array is : %d\n",a[i]);
    }
    }

return 0;
}

