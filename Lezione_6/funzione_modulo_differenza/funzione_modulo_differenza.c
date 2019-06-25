#include <stdio.h>
void diff_abs (float a, float b, float x, float y);
int main (void)
{
  float a,b,x,y;
  scanf("%f%f",&a,&b);
  diff_abs (a,b,x,y);
  return 0;

}

  void diff_abs (float a, float b, float x, float y)
  {
  x=a-b;
  y=b-a;
  printf("%.2f\n%.2f\n",x,y);
}
