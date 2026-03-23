
// 1. Reverse a Number


// 123 -> 321




// Algorithm:

// 	1. Start
// 	2. Read number n
// 	3. Set rev = 0
// 	4. Repeat while n > 0
// 		○ digit = n % 10
// 		○ rev = rev * 10 + digit
// 		○ n = n / 10
// 	5. Print rev
// 	6. Stop

// C Code:


#include <stdio.h>

int main() {
    int n, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    } 
    printf("Reversed number = %d", rev);

    return 0;
}


//===========================================================================================


// 2. Print All Divisors of a Number

// Algorithm:
// 	1. Start
// 	2. Read number n
// 	3. For i = 1 to n
// 		○ If n % i == 0, print i
// 	4. Stop

// C Code:

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Divisors are:\n");

    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

//===========================================================================================

// 3. Check Prime Number

// Algorithm:
// 	1. Start
// 	2. Read number n
// 	3. If n <= 1, not prime
// 	4. For i = 2 to n/2
// 		○ If n % i == 0, not prime
// 	5. If no divisor found, it is prime
// 	6. Stop
// C Code:

#include <stdio.h>

int main() {
    int n, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1) {
        flag = 0;
    } else {
        for(i = 2; i <= n / 2; i++) {
            if(n % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}


//===========================================================================================