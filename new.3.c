#include<stdio.h>
int main()
{
    #include <stdio.h>
int main()
{
    int c,n,d,i,j,mid;
    printf("Enter Case: ");
    scanf("%d",&c);

    printf("Enter Array Element: ");
    scanf("%d",&n);
    int a[n];
    int l=0,h=n;

    printf("Enter Sorted Numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    for(j=0;j<c;j++)
{
    printf("Enter Data to search: ");
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        mid=(l+h)/2;
        if(a[mid]==d)
        {
            printf("%d Found At index %d",d,i);
            break;
        }
        if(a[mid]>d)
        {
            h=mid-1;
        }
        if(a[mid]<d)
        {
            l=mid+1;
        }
    }
    if(i==n)
    {
        printf("Not Found!! ");
    }
}

    getch();
}

}
