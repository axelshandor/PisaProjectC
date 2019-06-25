#include <stdio.h>
 int main (void){

int n,i;
int t=0;
scanf("%d",&n );
do {
  if (t==1)
  {n=n-2;}
if (n==2){
  printf("**\n");
  goto fine;
}
if (n==1){
  printf("*\n");
  goto fine;
}
for (i=0; i < n; i++) {
  printf("*");
}
printf("\n");
t=1;
}
while (i>=2);
fine:

       return 0;
 }
