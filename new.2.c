#include<stdio.h>
int main()
{
    int b,c,j,d,k;
    printf("Enter the number :");
    scanf("%d",&b);
    int a[b],i,n;
    printf("Enter the number:\n");
    for(i=0;i<=b;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Test case\n");
    scanf("%d",&d);
    for(k=0;k<=d;k++)
    {
        printf("Enter the search value :\n");
        scanf("%d",&c);
        for(j=0;j<b;j++)
        {
            if(a[j]==0);
            {
                printf("Found %d at %d\n",c,j);
                break;
            }
        }
        if(j==b)
        {
            printf("Not found");
        }
    }
    return 0;
}
