#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}

// penjelasan : loop pertama dimulai dari 2 sampai 3 dan akan dicetak pada "Bilangan utama:"
// loop kedua dimulai dari 1 sampai 2 dan dicetak pada "Bilangan pengali:"
// setelah semua loop selesai, setiap bilangan akan dikalikan dan setiap perkalian akan di pindah pada baris berikutnya