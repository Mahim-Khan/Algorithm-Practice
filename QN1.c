#include<stdio.h>
int main()
{
    int i,n,max=0,min=0;
    printf("Enter The Array Size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min =a[0];
    max =a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Largest Value=%d\n",max);
    printf("Smallest Value=%d\n",min);
}
