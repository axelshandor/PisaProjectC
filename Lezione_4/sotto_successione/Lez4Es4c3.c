#include <stdio.h>
 int main (void){

int a[10];
int p,i;
for (i=0; i < 10; i++) {
  scanf("%d",&a[i]);
}
for (i=0; i < 10; i++) {
p=a[i]%2;
if (a[i]==0)
{
  printf("%d\n",a[i]);
}
if (p==0&&a[i]>0)
{
  printf("%d\n",a[i]);
}
if (a[i]<0&&a[i+1]>=0)
{
  printf("%d\n",a[i]);
}
}
       return 0;
 }
