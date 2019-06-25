#include <stdio.h>
void stampa_media (float media, int c);
int main (void)
{
int a[10];
int c=0;
float media;
for (int i = 0; i < 10; i++) {
scanf("%d",&a[i]);
}
if (a[9]>0) {
for (int i = 0; i < 10; i++) {
    if (a[i]>0) {
      media=media+a[i];
      c++;
    }
  }
}
if (a[9]<0) {
for (int i = 0; i < 10; i++) {
    if (a[i]<0) {
      media=media+a[i];
      c++;
    }
  }
}
stampa_media (media,c);

return 0;
}

void stampa_media (float media, int c)
{
media=media/c;
printf("%.2f\n",media);
}
