#include <stdio.h>
 int main (void)
 {
   int x,cont=0;
   int array[5];
   scanf("%d",&x );
   for (int i = 0; i < 5; i++) {
     scanf("%d",&array[i] );
   }
   for (int i = 0; i < 5; i++) {
     if (array[i]>x) {
       cont++;
     }
   }
  printf("%d\n",cont );
 }
