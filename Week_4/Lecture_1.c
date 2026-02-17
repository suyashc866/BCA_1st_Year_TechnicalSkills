

// Introduction to Loops in C

// What is a Loop?

// A loop is used to execute a block of code repeatedly until a given condition becomes false.
// Loops help us avoid writing the same code again and again.

// Why do we need loops?

// 	Without loop 
	
// 	printf("Hello\n");
// printf("Hello\n");
// printf("Hello\n");
// printf("Hello\n");
// printf("Hello\n");

// 	With loop 
	
// 	for(int i = 1; i <= 5; i++) {
//     printf("Hello\n");
// }
	
// 	Less code
// 	Easy to read
// 	Easy to modify
	
	

// Types of Loops in C

// 	C provides three types of loops:
// 		a. for loop
// 		b. while loop
// 		c. do-while loop

// 	1. for Loop
	
// 	Syntax
	
// 	for(initialization; condition; increment/decrement) {
//     // statements
// }
// 	Explanation
// 		○ Initialization → executed once (starting point)
// 		○ Condition → checked before every iteration
// 		○ Increment/Decrement → changes loop variable
// 		○ Statements → code to repeat
		
// 	Example
	
	#include <stdio.h>
	int main() {
    for(int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    return 0;
}
	
// 	Output:
	
// 	1 2 3 4 5

// 	2. while Loop
	
// 	Syntax
	
// 	initialization;
// while(condition) {
//     // statements
//     increment/decrement;
// }
	
// 	Explanation
// 		○ Condition is checked before execution
// 		○ Loop may execute zero times
		
// 	Example
	
// 	#include <stdio.h>
// 	int main() {
//     int i = 1;
// 	while(i <= 5) {
//         printf("%d ", i);
//         i++;
//     }
//     return 0;
// }
// 	Output:
	
// 	1 2 3 4 5
	

// 	3. do–while Loop
	
// 	Syntax
	
// 	initialization;
// do {
//     // statements
//     increment/decrement;
// } while(condition);
	
// 	Explanation
// 		○ Condition is checked after execution
// 		○ Loop executes at least once
		
// 	Example
	
// 	#include <stdio.h>
// 	int main() {
//     int i = 1;
// 	do {
//         printf("%d ", i);
//         i++;
//     } while(i <= 5);
// 	return 0;
// }
// 	Output:
	
// 	1 2 3 4 5
