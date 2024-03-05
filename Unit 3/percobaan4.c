#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}
//penjelasan :
//terdapat dua array, yaitu names[MAX_PERSONS][MAX_NAME_LENGTH] dan ages[MAX_PERSONS]
//"Roma", "Romi", "Romo" dimasukkan dalam array names
//25, 30, 35 dimasukkan dalam array ages
//mencetak header name dan age
//loop for untuk mencetak names dan ages sebanyak MAX_PERSON 