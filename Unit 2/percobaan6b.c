#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}
//penjelasan :
//pada looping pertama berfungsi untuk menentukan bilangan yang akan dikali(i)
//pada looping kedua berfungsi untuk menentukan bilangan pengali(j), dan mencetak bilangan pengali dan hasil
//bilangan pengali(j) dimulai dengan angka 1 sampai kurang dari sama dengan 2

//perulangan do-while digunakan saat setidaknya satu iterasi dilakukan sebelum kondisi diuji
//perulangan for digunakan saat kita mengetahui berapa kali iterasinya
//perulangan while digunakan saat kita tidak mengetahui berapa kali iterasinya