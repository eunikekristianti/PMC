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
    int waktu_kedatangan[n], waktu_eksekusi[n], waktu_proses[n], sisa_waktu[n], time;
    printf("Kuantum (ms) : ");
    int kuantum;
    scanf("%d", &kuantum);
    int i;
    for (i=0; i<n; i++){
        printf("\nWaktu kedatangan P%d (ms) : ", i);
        scanf("%d", &waktu_kedatangan[i]);
        printf("Waktu eksekusi P%d (ms) : ", i);
        scanf("%d", &waktu_eksekusi[i]);
        waktu_proses[i] = 0;
        sisa_waktu[i] = waktu_eksekusi[i];
    }
    printf("--------------------------------\n");
    printf("Waktu: 0 ms\n");
    for (int j=0; j<n; j++){
        printf("TP%d: %d,", j, waktu_proses[j]);
    }
    printf("Proses ke-0 masuk antrian\n--------------------------------\n");
    int done = 0;
    i = 0;
    time = 0;
    while (done < n){
        if (sisa_waktu[i] == 0){
            if (i == n-1){
                i = 0;
            }
            else {
                i += 1;
            }
        }
        else {
            int k = i+1;
            while (time <= waktu_kedatangan[k] && waktu_kedatangan[k] <= time+kuantum){
                printf("Waktu: %d ms\n", waktu_kedatangan[k]);
                for (int j=0; j<n; j++){
                    if (j==i){
                        printf("TP%d: %d,", j, waktu_proses[i]+waktu_kedatangan[k]-time);
                    }
                    else {
                        printf("TP%d: %d,", j, waktu_proses[j]);
                    }
                }
                printf("Proses ke-%d masuk antrian\n--------------------------------\n", k);
                k += 1;
            }
            if (sisa_waktu[i] <= kuantum && sisa_waktu[i] > 0){
                time = time + sisa_waktu[i];
                waktu_proses[i] += sisa_waktu[i];
                sisa_waktu[i] = 0;
                printf("Waktu: %d ms\n", time);
                for (int j=0; j<n; j++){
                    printf("TP%d: %d,", j, waktu_proses[j]);
                }
                printf("Proses ke-%d selesai\n--------------------------------\n", i);
                done += 1;
            }
            else if (sisa_waktu[i] > 0){
                time = time + kuantum;
                waktu_proses[i] += kuantum;
                sisa_waktu[i] -= kuantum;
                printf("Waktu: %d ms\n", time);
                for (int j=0; j<n; j++){
                    printf("TP%d: %d,", j, waktu_proses[j]);
                }
                printf("Proses ke-%d diantrikan kembali\n--------------------------------\n", i);
            }

            if (i == n-1){
                i = 0;
            }
            else {
                i += 1;
            }
        }
    }
    return 0;
}
