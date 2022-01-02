#include <stdio.h>
int main()
{
    int c,n,d,i,j;
    printf("Enter Case: ");
    scanf("%d",&c);

    printf("Enter Array Element: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Numbers: ");
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
        if (a[i]==d)
        {
            printf("%d Found at index %d \n",d,i);
            break;
        }
    }
    if(i==n)
    {
        printf("Not Found!! ");
    }
}

    getch();
}
