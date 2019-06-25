#include <stdio.h>
void min_azzera (int array[],int modulo, int min);
int main (void)
{
  int array[10];

  int modulo=0;
for (int i = 0; i < 10; i++) {
  scanf("%d",&array[i]);
}
int min=array[0];
min_azzera(array, modulo, min);

return 0;
}
void min_azzera (int array[],int modulo, int min)
{
for (int i = 0; i < 10; i++) {
  if (min<array[i]) {
    min=min;
  }
  else
  {
    min=array[i];
  }
  modulo=i%2;
  if (modulo!=0) {
    array[i]=0;
  }
  printf("%d\n",array[i]);
}
printf("%d\n",min );
}
