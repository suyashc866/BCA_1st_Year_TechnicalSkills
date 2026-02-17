// 	1. Hello Coding Blocks

// Problem Preview
// Write a program to print "Hello Coding Blocks !" on the screen.
// Input Format
// Constraints
// Output Format
// Hello Coding Blocks !


// Sample Input

// Sample Output
// Hello Coding Blocks !


// #include <stdio.h>

// int main() {
//     printf("Hello Coding Blocks !");
//     return 0;
// }


// 2 Natural Numbers

// Problem Preview
// Write a program to print all the natural numbers from 1 to N. Then print the same in reverse order.
// Input Format
// The first line contains a integer N.
// Constraints
// 0<N<1000
// Output Format
// Display space separated numbers from 1 to N in first line and in reverse order in the second line.
// Sample Input
// 10
// Sample Output
// 1 2 3 4 5 6 7 8 9 
// 9 8 7 6 5 4 3 2 1 



// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);

//     // Print numbers from 1 to N-1
//     for(int i = 1; i < N; i++) {
//         printf("%d ", i);
//     }

//     printf("\n");

//     // Print numbers from N-1 to 1
//     for(int i = N - 1; i >= 1; i--) {
//         printf("%d ", i);
//     }

//     return 0;
// }




// 	3. Basic Calculator
	
	
// Write a program that works as a simple calculator.
// 1.It reads a character (ch)
// 2.If ch is among '+', '-', '*', '/' or '%' it furthur takes two numbers (N1 and N2 as input). It then performs appropriate appropriate operation between numbers and print the number.
// 3.If ch is 'X' or 'x', the program terminates.
// 4.If ch is any other character, the program should print 'Invalid operation. Try again.' and seek inputs again (starting from character).

// Write code to achieve above functionality.
// Input Format
// Constraints
// 0 <= Input integers <= 100000000
// ( It is assured that the second integer provided for division and modulo operations will not be 0. )
// Output Format
// Output a single integer output for the operations in a new line each.
// Sample Input
// * 
// 1 
// 2 
// / 
// 4 
// 2 
// + 
// 3 
// 2 
// ; 
// X
// Sample Output
// 2 
// 2 
// 5 
// Invalid operation. Try again.
// Explanation
// Maybe use a do-while.


// #include <stdio.h>

// int main() {
//     char ch;
//     int N1, N2;

//     do {
//         scanf(" %c", &ch);   // Space before %c to ignore whitespace

//         if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
            
//             scanf("%d %d", &N1, &N2);

//             if (ch == '+')
//                 printf("%d\n", N1 + N2);
//             else if (ch == '-')
//                 printf("%d\n", N1 - N2);
//             else if (ch == '*')
//                 printf("%d\n", N1 * N2);
//             else if (ch == '/')
//                 printf("%d\n", N1 / N2);
//             else if (ch == '%')
//                 printf("%d\n", N1 % N2);
//         }
//         else if (ch == 'X' || ch == 'x') {
//             break;
//         }
//         else {
//             printf("Invalid operation. Try again.\n");
//         }

//     } while (1);

//     return 0;
// }



