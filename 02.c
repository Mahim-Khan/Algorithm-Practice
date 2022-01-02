#include <stdio.h>
int main()
{
    int n,s,i;
    printf("Enter Array Element: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter index: ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[s])
        {
            printf("Number is: %d",a[i]);
            break;
        }
    }
    getch();
}
