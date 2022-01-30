/*
Nama: Eunike Kristianti
NIM : 18320019
*/

#include <stdio.h>
#include <stdlib.h>
#define maxchar_fn 50
#define sig_byte 5

int main ()
{
    char namafile [maxchar_fn];
    unsigned char bit[sig_byte];
    FILE *filep;
    printf("File yang ingin dibuka : ");
    scanf("%s", namafile);
    filep = fopen(namafile,"r");
    if (filep != NULL){
        fread(bit, sig_byte, 1, filep);
        printf("File signature : %x %x %x %x %x\n", bit[0],bit[1],bit[2],bit[3],bit[4]);

        if ((bit[0] == 0x25) && (bit[1] == 0x50) && (bit[2] == 0x44) && (bit[3] == 0x46) && (bit[4] == 0x2D)){
            printf("Jenis file tersebut adalah PDF\n");
        }
        else if ((bit[0] == 0xFF) && (bit[1] == 0xD8) && (bit[2] == 0xFF)) {
            printf("Jenis file tersebut adalah JPG\n");
        }
        else {
            printf("Jenis file tidak terdefinisi\n");
        }
    }

    fclose(filep);
    return 0;
}
