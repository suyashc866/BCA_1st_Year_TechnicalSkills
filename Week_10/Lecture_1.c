// 1. What is an Array?


// 	An array is a collection of elements of the same data type stored in contiguous memory locations.
	
		
// 		Example:
		
// 		int arr[5] = {10, 20, 30, 40, 50};
		
		
		

// 2. Examples of Array


// 	int a[3] = {1, 2, 3};
	
	
// 	char name[4] = {'J', 'o', 'h', 'n'};
	
	
// 	float marks[5] = {90.5, 85.2, 78.0, 88.5, 92.3};
	
	
	
	

// 3. How to Print an Array


	#include <stdio.h>
	
	int main() {
	
	    int arr[5] = {10, 20, 30, 40, 50};
	
	    for(int i = 0; i < 5; i++) {
	
	        printf("%d ", arr[i]);
	
	    }
	
	    return 0;
	}




// 4. Input of an Array


	#include <stdio.h>
	
	int main() {
	
	    int arr[5];
	
	    for(int i = 0; i < 5; i++) {
	
	        scanf("%d", &arr[i]);
	    }
	
	    return 0;
	}
	
	
	






// Program: Read n elements and display them
	
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
	
	
	    printf("Array elements are:\n");
	
	    for(int i = 0; i < n; i++) {
	
	        printf("%d ", arr[i]);
	
	    }
	
	    return 0;
}


// Program: Find Maximum Element in Array

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
	
	
	    int max = arr[0];
	
	    for(int i = 1; i < n; i++) {
	        if(arr[i] > max) {
	            max = arr[i];
	        }
	    }
	
	    printf("Maximum element is: %d", max);
	
	    return 0;
}