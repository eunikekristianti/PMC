#include <stdio.h>
#include <stdlib.h>
/*
Nama: Eunike Kristianti
NIM : 18320019
*/

void main()
{
    printf("Selamat datang di permainan Water Jug!\n");
    printf("Dalam permainan ini, Anda akan diberikan 2 buah kendi air yaitu kendi A dan kendi B.\n");
    printf("Kendi A memiliki kapasitas 3L sementara kendi B 5L.\n");
    printf("Misi Anda yaitu mendapatkan 4L air pada kendi B menggunakan perintah-perintah yang ada di bawah.\n\n");
    printf("Perintah yang dapat Anda berikan yaitu:\n");
    printf("1. Isi penuh kendi A.\n");
    printf("2. Isi penuh kendi B.\n");
    printf("3. Tuangkan seluruh isi kendi A ke kendi B atau hingga kendi B penuh.\n");
    printf("4. Tuangkan seluruh isi kendi B ke kendi A atau hingga kendi A penuh.\n");
    printf("5. Buang seluruh isi kendi A.\n");
    printf("6. Buang seluruh isi kendi B.\n\n");
    printf("Kondisi awal:\n");
    printf("Kendi A : 0L\n");
    printf("Kendi B : 0L\n\n");
    int A = 0;
    int B = 0;
    while (B != 4) {
        int perintah;
        printf("Perintah yang ingin diberikan : ");
        scanf("%d", &perintah);
        if (perintah == 1) {
            printf("Mengisi penuh kendi A");
            A = 3;
        } else if (perintah == 2) {
            printf("Mengisi penuh kendi B");
            B = 5;
        } else if (perintah == 3) {
            printf("Menuangkan isi kendi A ke kendi B");
            int C = A;
            int D = B;
            if (C+D-5 > 0) {
                A = C+D-5;
            } else {
                A = 0;
            }
            if (C+D < 5) {
                B = C+D;
            } else {
                B = 5;
            }
        } else if (perintah == 4) {
            printf("Menuangkan isi kendi B ke kendi A");
            int C = A;
            int D = B;
            if (C+D < 3) {
                A = C+D;
            } else {
                A = 3;
            }
            if (C+D-3 > 0) {
                B = C+D-3;
            } else {
                B = 0;
            }
        } else if (perintah == 5) {
            printf("Mengosongkan kendi A");
            A = 0;
        } else if (perintah == 6) {
            printf("Mengosongkan kendi B");
            B = 0;
        } else {
            printf("\nPerintah tidak valid.");
        }
        printf("\nKondisi terkini:\n");
        printf("Kendi A : %dL", A);
        printf("\nKendi B : %dL\n\n", B);
    }
    printf("\nSelamat Anda berhasil mendapatkan 4L air dalam kendi B!\n");
    printf("Permainan selesai!\n\n");
}
