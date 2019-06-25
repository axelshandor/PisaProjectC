#include <stdio.h>
void sum_pow (int n, int c, float x, float appg, float ris, float array[]);
int main (void){
int n,c;
float x,appg,ris;
scanf("%d%f",&n,&x );
float array[n];
appg=x;
sum_pow (n,c,x,appg,ris,array);
return 0;
}

void sum_pow (int n, int c, float x, float appg, float ris, float array[])
{
for (int i = 0; i <= n; i++) {
if(i==0) {array[0]=1; i++; }
if(i==1) {array[1]=x; i++; }
array[i]=x*appg;
x=array[i];
}
for (int i = 0; i <= n; i++) {
  ris=ris+array[i];
}
printf("%.2f\n",ris );
}
