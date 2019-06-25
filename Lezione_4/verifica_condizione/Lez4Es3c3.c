#include <stdio.h>
 int main (void){

int A[10];
int i,x;
int trovato=0;

for (i=0; i < 10; i++) {
  scanf("%d",&A[i]);
}
for (i=1; i < 9; i++){
if (A[i+1]-A[i-1]==A[i])
{
  x=i;
trovato=0;
goto fine;
}
trovato=1;
}
fine:
if (trovato==1)
{
  x=-1;
}
printf("%d\n",x );
       return 0;
 }
