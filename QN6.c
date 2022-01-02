#include<stdio.h>
int main()
{
    int i,pos,size,n;
    printf("Enter Array size\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter array Elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Index for Update the Value\n");
    scanf("%d",&pos);
    printf("Enter New Value\n");
    scanf("%d",&n);

        a[pos-1]=n;
        printf("Array after update \n");
        for(i=0;i<size;i++)
        {
        printf("%d\n",a[i]);
         }

}
