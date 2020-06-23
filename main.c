#include <stdio.h>
#include <stdlib.h>

int main()
{ int U;
    scanf("%d", &U);
    int ii, V, C, J, c, j, s, K, L, I;
   int k=0;
    while (U!=0)
    {
       k++;
       printf ("Teste %d\n", k);

       for (ii=0; ii<V; ii++)
       {
         scanf("%d", &V);
          c=V%50;
          I=V/50;
          j=c%10;
          J=c/10;
          s=J%5;
          K=J/5;
          L=s/1;

           if (c==0) printf ("%d %d %d %d\n", I, J, K, L);
                else
             {
                      if (j==0) printf ("%d %d %d %d\n", I, J, K, L);
                        else printf ("%d %d %d %d\n", I, J, K, L);



             }



       }
  scanf("%d", &U);

     }


    return 0;
}
