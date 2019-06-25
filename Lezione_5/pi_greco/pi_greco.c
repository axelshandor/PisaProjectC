#include <stdio.h>

int main(){

   float pi_greco=0;
   float pi_grecotot=0;
   int denominatore=1;
   int i=0;
   int approsimazione;
   scanf("%d", &approsimazione);

   for(i=0; i<=approsimazione-1; i++){
      if(i%2==0){                 // se i è pari allora aggiungo , se è dispari sottraggo
         pi_greco=(float)4/(float)denominatore;
         denominatore+=2;
      }
      else{
         pi_greco=-(float)4/(float)denominatore;
         denominatore+=2;
      }
      pi_grecotot+=pi_greco;
   }

   printf("%.6f\n",pi_grecotot);
   return 0;
}
