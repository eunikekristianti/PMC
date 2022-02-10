/*
Nama: Eunike Kristianti
NIM : 18320019
*/

#include <stdio.h>
#include <stdlib.h>

struct mhs {
    int nim;
    char nama[80];
    float persen;
};

struct mhs kls[1000] = {};

int main()
{
    printf("Jumlah mahasiswa kelas: ");
    int n;
    scanf("%d", &n);
    int i;
    for (i=0; i<n; i++) {
        printf("\nNIM mahasiswa %d: ", i+1);
        scanf("%d", &kls[i].nim);
        printf("Nama mahasiswa %d: ", i+1);
        scanf("%s", &kls[i].nama);
        printf("Persentase kehadiran mahasiswa %d: ", i+1);
        scanf("%f", &kls[i].persen);
    }
    printf("\nMahasiswa yang persentase kehadirannya kurang dari 80%: ");
    for (i=0; i<n; i++) {
        if (kls[i].persen < 80) {
            printf("\n%d, %s", kls[i].nim, kls[i].nama);
        }
    }
    return 0;
}
