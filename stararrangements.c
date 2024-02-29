#include <stdio.h>

void unoMenos(int i, int c);

int main() {
    int c;
    scanf("%d", &c);
    printf("%d:\n", c);
    for(int i = 2; i <= c/2 + 1; i++) {
        unoMenos(i, c);
        if(c % i == 0) printf("%d,%d\n", i, i);
    }
    return 0;
}

void unoMenos(int i, int c) {
    int j = i - 1, sum = i;
    for(int k = 0; ; k++) {
        sum += (k % 2 == 0) ? j : i;
        if(sum == c) {
            printf("%d,%d\n", i, j);
            break;
        }
        if(sum > c) break;
    }
}
