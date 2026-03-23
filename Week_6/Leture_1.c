
// 1. Program to read a number and display its factorial

// 	Algorithm
// 		a. Start
// 		b. Read number n
// 		c. Initialize fact = 1
// 		d. Multiply numbers from 1 to n
// 		e. Display factorial
// 		f. Stop
		
	// Code

	#include <stdio.h>
	int main() {
    int n;                                                     
    long fact = 1;
	printf("Enter a number: ");
    scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
	printf("Factorial of %d = %ld", n, fact);
	return 0;
}
	
	// Example
	// Input:
	
	// 5
	// Output:
	
	// Factorial of 5 = 120

//===============================================================================



// 1. Sum = 1 + 2 + 3 + … + n
// N = 5  ==> N*(N+1)/ 2 ==> (5*6)/2 = 15 

// SUM = 0 
// I = 1, 2 , 3 ,4, 5
// SUM = SUM +I =1, 3 , 6, 10, 15


	
	#include <stdio.h>
	
	int main()
	{
	    int n, i, sum = 0;
	
	    printf("Enter n: ");
	    scanf("%d", &n);
	
	    for(i = 1; i <= n; i++)
	    {
	        sum = sum + i;
	    }
	    printf("Sum = %d\n", sum);
	
	    return 0;
	}
//===============================================================================



	
	// Program to Read a and b and Calculate a^b
	
	// A= 2
	// B= 3
	// ANS = 8
	// 2*2*2 ==> 3 TIMES
	
	
	
	
	
	
	// C Program
	
	#include <stdio.h>
	
	int main() {
	    int a, b, i;
	    long power = 1;
	
	    printf("Enter base (a): ");
	    scanf("%d", &a);
	
	    printf("Enter power (b): ");
	    scanf("%d", &b);
	
	    for(i = 1; i <= b; i++) {
	        power = power * a;
	    }
	
	    printf("Result = %ld", power);
	
	    return 0;
	}

    //===============================================================================
	
	// 3 Program to Print Numbers Between 100 and 200 Divisible by 3
	
	
	
	
	
	#include <stdio.h>
	
	int main() {
	
	    int i;
	
	    for(i = 100; i <= 200; i++) {
	        if(i % 3 == 0) {
	            printf("%d ", i);
	        }
	    }
	
	    return 0;
	}

    //===============================================================================
	
//  Program to Print Numbers Between a and b Divisible by c
	
	
	
	#include <stdio.h>
	
	int main() {
	
	    int a, b, c, i;
	
	    printf("Enter a and b: ");
	    scanf("%d %d", &a, &b);
	
	    printf("Enter divisor c: ");
	    scanf("%d", &c);
	
	    for(i = a; i <= b; i++) {
	        if(i % c == 0) {
	            printf("%d ", i);
	        }
	    }
	
	    return 0;
	}


    //===============================================================================
	


	
	
	
	
	
	
	
	
	
	