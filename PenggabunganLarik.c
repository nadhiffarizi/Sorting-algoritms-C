/*PROGRAM MENGGABUNGKAN DUA ARRAY */
#include <stdio.h>

main()
{
    /*algorithm*/

    /*baca larik 1*/
    int i=0; int x1[100]; int p; int n1;
    printf("Masukan nilai larik 1\n");
    scanf("%d", &p);
    while (p!=-999)
    {
        i++;
        x1[i] = p;
        scanf("%d", &p);
    }
    n1= i;
    printf("-----------\n");


    /*baca larik 2*/
    int x2[100]; int q; int n2; int j=0;
    printf("Masukkan Array 2\n");
    scanf("%d", &q);
    while (q!=-999)
    {
        j++;
        x2[j] = q;
        scanf("%d", &q);
    }
    n2=j;
    printf("---------\n");

    /*mengurutkan larik ke larik 3*/
    int n3; int x3[100];
    int k1=1; int k2=1; int k3=1;

    n3= n1+n2;
    while ((k1<=n1) && (k2<=n2))
    {
        if(x1[k1]<=x2[k2])
        {
            x3[k3] = x1[k1];
            k1++;
        }
        else
        {
            x3[k3] = x1[k1];
            k1++;
        }
        k3++;
    }
    /*menyalin x1 kalo x1 sisa*/
    while (k1<=n1)
    {
        x3[k3] = x1[k1];
        k1++;
        k3++;
    }

    /*menyalin x2 kalo x2 sisa */
    while (k2<=n2)
    {
        x3[k3] = x2[k2];
        k2++;
        k3++;

    }

    /*mencetak kembali*/
    for (i=1; i<=n3; i++)
    {
        printf("%d\n", x3[i]);
    }

}

