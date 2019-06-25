#include <stdio.h>
 int main (void){
   float a,b,r;
   char s;
   scanf("%f\n", &a);
   scanf("%f\n", &b);
   scanf("%c", &s);
   if (s=='+')
   {
     r=a+b;
   }
   if (s=='-')
   {
     r=a-b;
   }
   if (s=='/')
   {
     r=a/b;
   }
   if (s=='%')
   {
     r=(int)a%(int)b;
   }
printf("%.1f\n",r );

       return 0;
 }
