/*
Nama: Eunike Kristianti
NIM : 18320019
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Jumlah proses : ");
    int n;
    scanf("%d", &n);
    int proses[n], waktu_kedatangan[n], waktu_eksekusi[n];
    printf("Kuantum (ms) : ");
    int kuantum;
    scanf("%d", &kuantum);
    int i;
    for (i=0; i<n; i++)
    {
        proses[i]=i;
        printf("\nWaktu kedatangan P%d (ms) : ", proses[i]);
        scanf("%d", &waktu_kedatangan[i]);
        printf("Waktu eksekusi P%d (ms) : ", proses[i]);
        scanf("%d", &waktu_eksekusi[i]);
    }
    int j;
    printf("\n\nWaktu || Antrian (Nomor Proses) || Selesai\n");
    for (j=1; j<11; j++)
    {
        for (i=0; i<n; i++)
        {
            if (waktu_kedatangan[i] <= j*kuantum)
            {

            }
        }
    }
    return 0;
}
