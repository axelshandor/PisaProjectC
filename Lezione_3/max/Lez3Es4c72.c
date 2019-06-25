#include <stdio.h>
 int main (void){
    int x,y,z,max;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);

if (x<y)
{max=y;}
else
{max=x;}

if (max<z)
{max=z;}

printf("%d",max);
return 0;
 }
