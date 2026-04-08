// Take the following as input.
// A number
// A digit
// Write a function that returns the number of times digit is found in the number. Print the value returned.
// Input Format
// Integer (A number) Integer (A digit)
// Constraints
// 0 <= N <= 1000000000 0 <= Digit <= 9
// Output Format
// Integer (count of times digit occurs in the number)
// Sample Input
// 5433231 
// 3
// Sample Output
// 3
// Explanation
// The digit can be from 0 to 9. Assume decimal numbers.In the given case digit 3 is occurring 3 times in the given number.


#include <stdio.h>

int countDigit(int n, int d) {
    int count = 0;

    // special case when n = 0
    if(n == 0 && d == 0)
        return 1;

    while(n > 0) {
        int rem = n % 10;
        if(rem == d)
            count++;
        n = n / 10;
    }

    return count;
}

int main() {
    int n, d;
    scanf("%d %d", &n, &d);

    int result = countDigit(n, d);
    printf("%d", result);

    return 0;
}




// Take as input N, a number. Print the pattern as given in the input and output section.


// Input Format
// Enter value of N


// Constraints
// 1 <= N < 10


// Output Format
// Print the pattern.


// Sample Input
// 7
// Sample Output
//  1******
//  12*****
//  123****
//  1234***
//  12345**
//  123456*
//  1234567
// Explanation
// There is no space between any two numbers. Catch the pattern for corresponding input and print them accordingly.


#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for(int k = 1; k <= n - i; k++) {
            printf("*");
        } 
        printf("\n");
    }
    return 0;
}



// Write a program to print given pattern by taking input N.
// Input Format
// The first line contains an integer N.
// Constraints
// Output Format
// Display the pattern as result.
// Sample Input
// 5
// Sample Output
//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 
// Explanation




#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        
        // print spaces
        for(int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // print stars
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

// 1233445566
//  3 = 2
// 4 = 2
// 5 = 2

// N = 5433231 
// D = 3
// Count = 0 -> 1

// Rem = N % 10 = 1
// Rem == d
// 1 ===3 False
// N = 543323
// Rem =3 
// Rem == d
// 3 ==3 = true


