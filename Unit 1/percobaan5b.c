#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}
// perbedaan output dari kedua program tersebut yaitu program pertama yang tercetak hanya satu kata saja karena menggunakan scanf
// sedangkan pada program kedua yang tercetak satu baris (fgets)