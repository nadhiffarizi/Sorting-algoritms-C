/*PROGRAM SELECTION SORTING MENGGUNAKAN PARAMETER MINIMUM DAN URUT KEATAS*/
#include <stdio.h>

main()
{
    /*variabel*/
    int i; int x[100]; int p; int N;
    /*algorithm*/

    /*membaca array*/
    scanf("%d", &p); i=0;
    while (p!=-999)
    {
        i++;
        x[i]=p;
        scanf("%d", &p);
    }
    N=i;
    printf("--------\n");

    /*mengurutkan*/
    int imin; int j; int tempt;
    for(i=1; i<=N-1; i++)       /*menukar sebanyak N-1 */
    {
        imin = i;   /*inisialisasi*/
        for(j=i+1; j<=N; j++)
        {
            if(x[j]<=x[imin])
            {
                imin=j;
            }
        }
        tempt = x[i];
        x[i]=x[imin];
        x[imin] = tempt;
    }

    /*mencetak ulang*/
    for(i=1; i<=N; i++)
    {
        printf("%d\n", x[i]);
    }

}
