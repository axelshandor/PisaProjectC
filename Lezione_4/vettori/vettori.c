#include <stdio.h>
 int main (void){
int x[5];
int y[5];
int z[5];
int i;
for (i=0; i < 5; i++) {
  scanf("%d",&x[i] );
}

for (i=0; i < 5; i++) {
  scanf("%d",&y[i] );
}

printf("[");
for (i=0; i < 5; i++) {
  if (i==4){
    printf("%d",x[i]);
    goto fine_for_x;
  }
  printf("%d",x[i]);
  printf(",");
  fine_for_x:
  i=i;
}

printf("]");
printf("\n");
printf("[");
for (i=0; i < 5; i++) {
  if (i==4){
    printf("%d",y[i]);
    goto fine_for_y;
  }
  printf("%d",y[i]);
  printf(",");
  fine_for_y:
  i=i;
}
printf("]");
printf("\n");
printf("[");
for (i=0; i < 5; i++) {
  if (i==4){
    z[i]=x[i]+y[i];
    printf("%d",z[i]);
    goto fine_for_z;
  }
  z[i]=x[i]+y[i];
  printf("%d",z[i]);
  printf(",");
  fine_for_z:
  i=i;
}
printf("]");
return 0;
 }
