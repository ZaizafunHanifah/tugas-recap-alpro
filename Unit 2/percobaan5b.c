#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}
// penjelasan :
// loop pertama akan berjalan selama i kurang dari atau sama dengan 3 lalu dicetak pada "Bilangan utama:"
// loop kedua akan berjalan selama j kurang dari atau sama dengan 2 lalu dicetak pada "Bilangan pengali:"
// variabel j ditambah 1 setiap iterasi
// loop selesai, setiap bilangan akan dikalikan dan setiap perkalian baru akan di pindah pada baris selanjutnya