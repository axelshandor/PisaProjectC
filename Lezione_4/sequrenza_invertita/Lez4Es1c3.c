#include <stdio.h>
 int main (void){

int a [10];
int b [10];
for (int i = 0; i < 10; i++) {
  scanf("%d",&a[i]);
}
for (int i = 0; i < 10; i++) {
  int c=a[i]%2;
  if (c==0)
  {
    a[i]=a[i]/2;
  }}
  for (int i = 10; i >=0; i--){
  if (a[i]<9999999){
  printf("%d\n",a[i] );}}

       return 0;
 }
