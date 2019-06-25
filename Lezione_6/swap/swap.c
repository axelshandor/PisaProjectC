#include <stdio.h>
void ordered_swap (int a, int b, int c, int appg);
int main (void)
{
  int a,b,c,appg;
  scanf("%d%d%d",&a,&b,&c);
  ordered_swap (a,b,c,appg);

  return 0;
}

  void ordered_swap (int a, int b, int c, int appg)
  {
  if (a<b) {
    a=a;
    if(a<c) a=a;
    else{
      appg=a;
      a=c;
      c=appg;
    }

  }
  else
  {
    appg=a;
    a=b;
    b=appg;
    if(a<c) b=b;
    else{
      appg=a;
      a=c;
      c=appg;
    }
  }

  if (b<c) {
    b=b;
  }
  else
  {
    appg=b;
    b=c;
    c=appg;
  }
  printf("%d\n%d\n%d\n",a,b,c );

}
