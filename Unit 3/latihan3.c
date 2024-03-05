#include <stdio.h>

int main() {
    int a; //isi array
    int b; //input

    scanf("%d", &a);

    int array[a];

    for (int i = 0; i < a; i++) {
        scanf("%d", &array[i]);
    }

    int c = 0; //jumlah
    for (int i = 0; i < a; i++) {
        c += array[i];
    }

    printf("%d\n", c);

    return 0;
}