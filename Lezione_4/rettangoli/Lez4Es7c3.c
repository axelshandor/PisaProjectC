#include <stdio.h>
 int main (void){
int h,l,i,a;
int g=0;
scanf("%d",&h);
scanf("%d",&l);
if(l<0||h<0){
  goto fine;

}
if (h==1&&l==1) {
  printf("*");
  goto fine;
}
for (i=l; i>0; i--) {
  printf("*");
}
printf("\n");
for (a = h-2; a > 0; a--) {
for (i=l; i>0; i--) {
  if (i==l)
  {
  printf("*");
  goto prossimo;
}
if (i==1)
{
printf("*\n");
goto prossimo;
}
  printf(" ");
  prossimo:
  g++;
}
}
for (i=l; i>0; i--) {
  printf("*");
}

fine:
       return 0;
 }
