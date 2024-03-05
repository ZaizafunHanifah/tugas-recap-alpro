#include <stdio.h>

int main () {
    int jumlah;
    int transaksi;
    int pengeluaran = 0;

    scanf("%d", &jumlah);

    if (jumlah<=0) {
        printf("Tidak ada transaksi hari ini");
        return 0;
    }

    for (int i = 0; i < jumlah; i++) {
        scanf("%d", &transaksi);
        pengeluaran += transaksi;
    }
    printf("%d\n", pengeluaran);
    return 0;
}