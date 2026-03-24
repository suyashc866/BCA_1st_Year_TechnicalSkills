// 1. Given N print N stars


// Output (N = 5):

// * * * * *

	#include <stdio.h>
	int main() {
	    int N;
	    scanf("%d", &N);
	
	    for(int i = 0; i < N; i++) {
	        printf("* ");
	    }
	
	    return 0;
	}
	

// 2. Grid Pattern
// Output (N = 3, M = 5):

// * * * * *
// * * * * *
// * * * * *

	#include <stdio.h>
	int main() {
	    int N, M;
	    scanf("%d %d", &N, &M);
	
	    for(int i = 0; i < N; i++) {
	        for(int j = 0; j < M; j++) {
	            printf("* ");
	        }
	        printf("\n");
	    }
	
	    return 0;
	}



// 3. Square Star Pattern

// Output (N = 4):

// * * * *
// * * * *
// * * * *
// * * * *

#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}



// 4. Increasing Star Pattern

// Output (N = 4):

// *
// * *
// * * *
// * * * *

#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        for(int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}



// 5. Reverse Star Pattern

// Output (N = 4):

// * * * *
// * * *
// * *
// *

#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        for(int j = 0; j < N + 1 - i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
