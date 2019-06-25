#include <stdio.h>
 int main (void){
int x,xx,ris,y;
scanf("%d",&x );
ris=1;
while(x>1){
y=x-1;
ris=ris*x*(y);
y=0;
x=x-2;
}
x=ris;
printf("%d",x );
return 0;
 }
