#include <stdio.h>

int main()
{
   int array[100], position, c, n;

   printf("How many Numbers you want to insert in Array?\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for ( c = 0 ; c < n ; c++ ){
      scanf("%d", &array[c]);
   }
   printf("Enter Index to delete the Value\n");
   scanf("%d", &position);

   if ( position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for ( c = position -1 ; c < n-1; c++ )
       array[c] = array[c+1];

      printf("The Array After Delete:\n");

      for( c = 0 ; c < n-1; c++ )
         printf("%d\n", array[c]);
   }

   return 0;
}
