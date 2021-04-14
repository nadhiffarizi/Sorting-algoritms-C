/*PENGURUTAN DENGAN METODE BUBBLE DENGAN MENUKAR ELEMEN ARRAY*/
/*PENGURUTAN DILAKUKAN MENAIK*/
#include <stdio.h>
#include <stdbool.h>

main()
{
    /*variabel*/
    int i; int x[100]; int p;
    /*algorithm*/

    /*baca array*/
    i=0;
    scanf("%d", &p);
    while (p!=-999)
    {
        i++;
        x[i] = p;
        scanf("%d", &p);
    }
    printf("---------\n");
    int N;
    N=i;
    /*mengurutkan*/
    int k; int tempt;

    for(i=1; i<=N-1; i++)       /*ada n-1 pengulangan*/
    {
        for(k=N; k>=i+1; k--)
        {
            if(x[k]<x[k-1])
            {
                tempt = x[k];
                x[k]= x[k-1];
                x[k-1] = tempt;
            }

        }
    }

    /*mencetak ulang*/
    for (i=1; i<=N; i++)
    {
        printf("%d", x[i]);
    }
}
