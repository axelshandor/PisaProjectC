#include <stdio.h>
void mcm_f (int n, int m, int cont, int trovato, int prodotto);
void mcd_f (int n, int m, int x, int y, int mcd);
int main (void)
{
int n, m, cont, trovato, prodotto,x,y,mcd;
scanf("%d%d", &n, &m);
mcd_f (n,m,x,y,mcd);
mcm_f (n,m,cont,trovato,prodotto);


return 0;
}


void mcd_f (int n, int m, int x, int y, int mcd)
{
x = n;
y = m;
while (y != x)
{
if (y > x) y = y-x;
else x = x-y;
}
mcd = x;
printf("%d\n", mcd);

}

void mcm_f (int n, int m, int cont, int trovato, int prodotto)
{
trovato = 0;
prodotto = n*m;
if (n > m) cont = n;
else cont = m;
while (cont < prodotto && trovato == 0)
{
if (cont%n == 0 && cont%m == 0) trovato = 1;
else cont = cont+1;
}
printf("%d\n",cont);
}
