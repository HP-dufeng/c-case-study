#include <stdio.h>

void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt) {
    int first, last;
    for (first = 0, last =cnt-1; first<last; first++, last--) {
        inplace_swap(&a[first], &a[last]);
    }
}

int main() {
    int MAX_LENGTH = 5;
    int a[] = {1, 2, 3, 4, 5};

    reverse_array(a, MAX_LENGTH);

    for(int i =0; i<MAX_LENGTH; i++) {
        printf("%d", a[i]);
    }
    

    return 0;
}