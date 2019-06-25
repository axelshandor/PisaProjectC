#include <stdio.h>
void multipli (int m, int n, int appg);
int main (void){
int n,m,appg;
scanf("%d",&n );
scanf("%d",&m );
appg=m;
multipli (m,n,appg);
return 0;
}

void multipli (int m, int n, int appg)
{
for (int i = 0; i < n ; i++) {
  if (m>n) return;
  if (m%appg==0) {
    printf("%d\n",m );
  }
  m++;
}

}
