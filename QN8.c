#include<stdio.h>
int main()
 {
    int i,size,position,delitem,flag=0;
    printf("Enter Array size\n");
    scanf("%d",&size);
    int a[size],temp[size-1];
    printf("Enter numbers in array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=1;
    while(size!=0){
    printf("\nCase:%d",c);
    printf("\nEnter element to be deleted\n");
    scanf("%d",&delitem);
        for(i=0;i<size;i++)//find position of a number
    {
        if(a[i]==delitem)
        {
            position=i;
            flag=1;
        }

    }
    if(flag==1)
    {
        for(i=0;i<size-1;i++)//deleting number in array
        {
        if(i<position)
        {
           temp[i]=a[i];
           }
        if(i>=position)
        {
         temp[i]=a[i+1];
        }

        }

        printf("Array after deleting %d\n",delitem);
        for(i=0;i<size-1;i++)
        {
        printf("%d\n",temp[i]);
         }
    }
    else
    {
        printf("Number not found in array\n");
    }
    c++;
    }
}
