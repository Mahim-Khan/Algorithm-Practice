#include<stdio.h>
int main()
{
    int i,n,search;
    printf("How many numbers you want to insert?");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d array Element \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter index Number : \n",n);
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(i==search)
    {
    printf("The value in index %d is %d",search);
    }
    }
    return 0;

}
