/*PROGRAM MENGURUTKAN DENGAN ALGORITMA SISIP*/
#include <stdio.h>
#include <stdbool.h>
main()
{
    /*variabel*/
    int k=0; int x[100]; int N; int i;

    /*algorthm*/

    /*membaca value array*/
    int p;
    printf("Masukkan nilai array\n");
    scanf("%d", &p);
        while (p!=-999)
        {
            k++;
            x[k] = p;
            scanf("%d", &p);
        }
    N=k;
    printf("%d", N);
    printf("----------\n");

    /*mengurutkan berdasarkan sisip*/
    int j; int y; bool found;
    for (i=2; i<=N; i++)
    {
        y= x[i];
        j=i-1;
        found = false;

        /*untuk membandingkan dengan elemen selanjutnya*/
        while((j>=1) && (!found))
        {
            if(x[j]<y)
            {
                x[j+1] = x[j];
                j--;
            }
            else
            {
                found = true;
            }

        }
        x[j+1] = y;
    }

    /*mencetak kembali*/
    for (i=1; i<=N; i++)
    {
        printf("%d\n", x[i]);
    }
    /*printf("%d\n", x[2]); */

}
