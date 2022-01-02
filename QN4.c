#include<stdio.h>
int main()
{
    int i,n,search,l,h,flag,mid;
    printf("How many Numbers you want to insert?");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d array Element \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    l=1;
    h=n;
    flag=0;
    int c=1;
    while(n!=0){
    printf("\nCase:%d",c);
    printf("\nEnter Data You want to search\n");
    scanf("%d",&search);
    while (l<=h&&flag==0){
               mid=(l+h)/2;
             if(a[mid]==search)
              {
                   flag=1;

              }
            else if(a[mid]<search)
              {
             l=mid+1;
              }
           else{
              h=mid-1;
              }

        }
     if(flag==1)
            {
          printf("%d is found at Index %d",search,mid);
           }
     else
        {
        printf("%d is not found in the Array",search);
    }
    c++;
    }
}



