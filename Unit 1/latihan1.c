#include <stdio.h>

int main () {
    int v; //kecepatan
    int s; //jarak
    int t; //waktu

    scanf("%d %d", &s, &t);
    float kecepatan = (float) s/t;
    scanf("%d %d", &v, &t);
    float jarak = (float) v*t;
    scanf("%d %d", &s, &v);
    float waktu = (float) s/v;

    printf("%.2f\n", kecepatan);
    printf("%.2f\n", jarak);
    printf("%.2f", waktu);

    return 0;
}