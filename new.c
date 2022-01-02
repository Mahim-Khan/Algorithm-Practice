#include<stdio.h>
int main()
{
    int n,i,max=0,min=0;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
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
    printf("Largest value=%d\n",max);
    printf("smallest value=%d\n",min);

    return 0;


}
