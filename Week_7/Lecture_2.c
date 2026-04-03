// 1. Pattern (Number & Star Alternating)
// Output (N = 5)

// 1
// 1 *
// 1 * 3
// 1 * 3 *
// 1 * 3 * 5



#include <stdio.h>

int main() {
    int N = 5;

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            if(j % 2 == 0)
                printf("* ");
            else
                printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// 2. Pattern (Rectangle Border)
// Output (N = 5)
// // 12345
// *___*
// *___*
// *___*
// *___*
// *___*


#include <stdio.h>

int main() {
    int N = 5;
    for(int i = 1; i <= N; i++) { 
        for(int j = 1; j <= N; j++) {
            if(j == 1 || j == N)
                printf("*");
            else
                printf("_");
        }
        printf("\n");
    }
    return 0;
}

// 3. Pattern (Shrinking Spaces Between Stars)
// Output (N = 5)

// *_____*
// *____*
// *___*
// *__*
// *_*


#include <stdio.h>

int main() {
    int N = 5;

    for(int i = 1; i <= N; i++) {
        printf("*");
        for(int j = 1; j <= N + 1 - i; j++) {
            printf("_");
        }
        printf("*\n");
    }
    return 0;
}

// 4. Pattern (Increasing Stars with Leading Spaces)
// Output (N = 5)

// ____* 
// ___**
// __***
// _****
// *****


#include <stdio.h>

int main() {
    int N = 5;

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N - i; j++) {
            printf("_");
        }
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
// }

// 5. Pattern (Decreasing Stars with Leading Spaces)
// Output (N = 5)

// *****
// _****
// __***
// ___**
// ____*


#include <stdio.h>

int main() {
    int N = 5;

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i - 1; j++) {
            printf("_");
        }
        for(int j = 1; j <= N - i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}