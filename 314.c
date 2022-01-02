#include <stdio.h>
int main()
{
    int n,count=0,out=0,i,j,k;
    printf("How many numbers: ");
    scanf("%d",&n);
    int a[n];
    int b[100]={0};
    printf("Enter Numbers: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        count=0;
        for(k=0;k<n;k++)
        {
            if(b[k]==a[i])
            {
                break;
            }
        }
        if(k!=n)
        {
            continue;
        }
        b[out]=a[i];
        for(j=0;j<n;j++)
        {
            if(b[out]==a[j])
            {
                count++;
            }
        }
        if(count>1)
        {
            printf("%d : %d \n",b[out],count);
        }

        out++;
    }
    printf("Final Array: ");
    for(i=0;i<n;i++)
    {
        if(b[i]==0)
        {
            break;
        }
        printf("%d ",b[i]);
    }

    getch();
    return 0;
}
