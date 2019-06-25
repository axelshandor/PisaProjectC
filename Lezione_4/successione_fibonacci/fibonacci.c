#include <stdio.h>
 int main (void){
int x,y,j,a;
j=x=y=1;
scanf("%d",&a );
goto zero;
prog:
for(int i = 2;i<=a;i++){
          j=x;
          x=y;

         y=j+x;
         if (a>=j) {
printf("%d\n",j );
}
}
goto fine;
zero:
printf("0\n");
goto prog;
fine:
return 0;
 }
