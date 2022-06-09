#include <stdio.h>
#include <math.h>

void clear() {
    system("cls");
}

void pArr(int * Arr, int count) {
    for (int i = 0; i < count; i++) {
        printf("%d ", Arr[i]);
    }
    printf("\n");
}