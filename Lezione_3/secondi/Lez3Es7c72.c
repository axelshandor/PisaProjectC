#include <stdio.h>
 int main (void){
    int t,h=0,m=0,s=0;
    scanf("%d",&t);
    while(t>=3600){
      t=t-3600;
      h=h+1;
    }
    while(t>=60){
      t=t-60;
      m=m+1;
    }
    while(t>0){
      t=t-1;
      s=s+1;
    }
    printf("%d h %d min %d s",h,m,s);

return 0;
 }
