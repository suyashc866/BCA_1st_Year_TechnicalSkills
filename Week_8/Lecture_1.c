// . Hollow Pyramid Pattern


// **********
// ****  ****
// ***    ***
// **      **
// *        *


#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N - i + 1; j++) {
            printf("*");
        }
        for(int j = 1; j <= 2 * i - 2; j++) {
            printf(" ");
        }
        for(int j = 1; j <= N - i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

// 2. Reverse Pattern


// *        *
// **      **
// ***    ***
// ****  ****
// **********


#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }

        for(int j = 1; j <= 2 * N - 2 * i; j++) {
            printf(" ");
        }

        for(int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********