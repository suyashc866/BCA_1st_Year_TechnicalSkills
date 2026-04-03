// . Number Increasing Pattern


// 1
// 12
// 123
// 1234


#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

// Number Decreasing Pattern

// 12345
// 1234
// 123
// 12
// 1


#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        for(int j = 1; j <= N - i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

// Continuous Number Pattern


// 1
// 2 3
// 4 5 6
// 7 8 9 10


#include <stdio.h>

int main() {
    int N, k = 1;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", k);
            k++; 
        }
        printf("\n");
    }

    return 0;
}

// Diamond Pattern


// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *


#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(int i = 1; i <= N; i++) {
        for(int j = N - i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
