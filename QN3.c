#include<stdio.h>
int main()
{
    int i,n,j=0,search;
    printf("How many Numbers you want to insert?");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d array Element \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=1;
    while(n!=0){
    printf("\nCase:%d",c);
    printf("\nEnter Data You want to search\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
     {
      if(a[i]==search)
       {
       j=1;
       break;
       }
     }
    if(j==1)
      {

        printf("%d is found at Index %d",search,i);

      }
     else
       {
         printf("%d is not found",search);
       }
       c++;
    }
}




