// INTRODUCTION TO C PROGRAMMING

// What is C?

// 	• C is a general-purpose programming language
// 	• Developed by Dennis Ritchie in 1972
// 	• Mainly used for:
// 		○ System programming
// 		○ Operating systems
// 		○ Embedded systems
// 		○ Application development

// Structure of a C Program

// 		#include <stdio.h>
// 		int main() {
// 		printf("Hello C");
// 		return 0;
// 		}
		
		
// Explanation

// 	• #include <stdio.h> → Header file for input and output operations
// 	• main() → Entry point of the program
// 	• printf() → Used to print output on the screen
// 	• return 0; → Indicates successful termination of the program

// Variables in C


// 	• A variable is a container used to store data
// 	• The value of a variable can change during program execution
	
	
// Syntax

// data_type variable_name;

// 		Example
// 		int a;
// 		float b;
// 		char c;
		
		

// Common Data Types

// 	Data Type	Meaning
// 	int	Integer numbers
// 	float	Decimal numbers
// 	double	Large decimal numbers
// 	char	Single character
	
	
// Example Program

// 	int age = 20;
// 	float marks = 85.5;
// 	char grade = 'A';

// Comments in C

// What are Comments?

// 	• Comments are non-executable lines
// 	• Used to explain code
// 	• Improve code readability

// Types of Comments

// 	1. Single-line Comment
// 	// This is a single line comment
// 	2. Multi-line Comment
// 	/* This is
// 	a multi-line
// 	comment */

// How to Take Input in C

// 	Using scanf()
// 		○ scanf() is used to take input from the user
// 		○ It is defined in <stdio.h>
// 	Syntax
// 	scanf("format_specifier", &variable);
	
	
// 	Example
// 	int n;
// 	scanf("%d", &n);



// Format Specifiers

// 	Data Type	Specifier
// 	int	%d
// 	float	%f
// 	double	%lf
// 	char	%c

// How to Print Output in C

// 	Using printf()
// 		○ printf() is used to display output
// 		○ It is also defined in <stdio.h>
	
// 	Syntax
// 	printf("message");
// 	printf("format_specifier", variable);
// 	Examples
// 	printf("Hello World");
// 	printf("Value = %d", n);

// Complete Example Program
// 	#include <stdio.h>
// 	int main() {
// 	int n;
// 	printf("Enter a number: ");
// 	scanf("%d", &n);
// 	printf("You entered: %d", n);
// 	return 0;
// 	}
