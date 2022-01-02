#include<stdio.h>
int main()
{
    int a[5], n, i, largest, smallest;
    scanf("%d",&n);
    printf("element of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    largest = smallest =a[0];
    for(i=1;i<n;i++)
        if(a[i]>largest)
        {
            largest=a[i];

        }
        printf("largest value: %d\n",largest);
        if(a[i]<smallest)
        {
            smallest=a[i];

        }
         printf("smallest value: %d\n",smallest);
    return 0;
}
