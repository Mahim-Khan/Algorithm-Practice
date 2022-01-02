#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("Highest Value = %d\n",a);
            printf("Middle Value = %d\n",c);
        }
        else
        {
            printf("Highest Value = %d\n",c);
            printf("Middle Value = %d\n",a);
        }

    }
    else if(b>a)
    {
       if(b>c)
        {
            printf("Highest Value = %d\n",b);
            printf("Middle Value = %d\n",c);
        }
        else
        {
            printf("Highest Value = %d\n",c);
            printf("Middle Value = %d\n",b);
        }
    }
    else if(c>a)
    {
        if(c>b)
        {
            printf("Highest Value = %d\n",c);
            printf("Middle Value = %d\n",b);
        }
        else
        {
            printf("Highest Value = %d\n",b);
            printf("Middle Value = %d\n",c);
        }
    }

    return 0;
}
