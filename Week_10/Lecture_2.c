//  Program: Display Array in Reverse Order

	#include <stdio.h>
	
	int main() {
	    int n;
	
	    printf("Enter number of elements: ");
	    scanf("%d", &n);
	
	    int arr[n];
	
	    printf("Enter elements:\n");
	    for(int i = 0; i < n; i++) {
	        scanf("%d", &arr[i]);
	    }
	
	    printf("Array in reverse order:\n");
	    for(int i = n - 1; i >= 0; i--) {
	        printf("%d ", arr[i]);
	    }
	
	    return 0;
}



// 1. Sum of All Elements in Array

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of elements = %d", sum);

    return 0;
}

// 2. Count Even and Odd Numbers

#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even count = %d\n", even);
    printf("Odd count = %d", odd);

    return 0;
}
