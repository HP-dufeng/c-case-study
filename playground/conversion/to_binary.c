#include <stdio.h>

int main() {
    int a[16] = {0};
    printf("please input the decimalism number(0~32767):\n");
    int i, j, n, m;
    scanf("%d", &n);
    for (m=0; m<15; m++) {
        i = n % 2;
        j = n / 2;
        n = j;
        a[m] = i;
    }

    for(m=15; m>=0; m--) {
        printf("%d", a[m]);
        if(m%4 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}