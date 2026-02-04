// 1 Write a program that will read two numbers and find and display greater number

// 2. Write a program that will read three numbers and find and display the largest of three numbers

// 3. Write a program that will read marks of a student and display its grade A,B,C,D,E and Fail





// Find the Greater Number


// 	Flowchart
	
//    ┌─────────┐
//    │  Start  │
//    └────┬────┘
//         ↓
//  ┌──────────────────┐
//  │ Read a and b     │
//  └────┬─────────────┘
//         ↓
//  ┌──────────────────┐
//  │ a > b ?           │
//  └────┬────────┬────┘
//       Yes       No
//        ↓         ↓
// ┌───────────┐ ┌───────────┐
// │ Print a   │ │ Print b   │
// └────┬──────┘ └────┬──────┘
//         ↓              ↓
//    ┌──────────────┐
//    │     End      │
//    └──────────────┘
// Algorithm
// 	a. Start
// 	b. Read two numbers a and b
// 	c. If a > b, print a
// 	d. Else print b
// 	e. Stop
		
	
	
#include <stdio.h>
int main() {
int a, b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
if (a > b)
    printf("Greater number = %d", a);
else
    printf("Greater number = %d", b);
return 0;
}


// Program to Read Three Numbers and Display the Largest
	
// 	Flowchart
	
// 		┌───────────┐
//         │   Start   │
//         └─────┬─────┘
//               ↓
//      ┌─────────────────┐
//      │ Read a, b, c    │
//      └─────┬───────────┘
//            ↓
//    ┌──────────────────────┐
//    │ a >= b AND a >= c ?  │
//    └─────┬─────────┬─────┘
//         Yes        No
//          ↓          ↓
//  ┌─────────────┐   ┌──────────────────────┐
//  │ largest = a │   │ b >= a AND b >= c ?  │
//  └─────┬───────┘   └─────┬─────────┬─────┘
//        ↓               Yes        No
//                        ↓          ↓
//                ┌─────────────┐  ┌─────────────┐
//                │ largest = b │  │ largest = c │
//                └─────┬───────┘  └─────┬───────┘
//                      ↓               ↓
//               ┌─────────────────────────┐
//               │ Print largest number    │
//               └─────┬───────────────────┘
//                     ↓
//                ┌───────────┐
//                │   End     │
            //    └───────────┘
		
// Algorithm
//     i. Start
//     ii. Read three numbers a, b, and c
//     iii. If a is greater than or equal to both b and c, then largest = a
//     iv. Else if b is greater than or equal to both a and c, then largest = b
//     v. Else largest = c
//     vi. Display the largest number
//     vii. Stop
		

		
// #include <stdio.h>
// int main() {
// int a, b, c, largest;
// printf("Enter three numbers: ");
// scanf("%d %d %d", &a, &b, &c);
// if (a >= b && a >= c)
//  largest = a;
// else if (b >= a && b >= c)
//  largest = b;
// else
//  largest = c;
// printf("Largest number = %d", largest);
// return 0;
// }
	
// 2. Program to Read Marks and Display Grade (A, B, C, D, E, Fail)
// Grading Criteria (Example)
// Marks	Grade
// ≥ 90	A
// ≥ 80	B
// ≥ 70	C
// ≥ 60	D
// ≥ 50	E
// < 50	Fail
	
//     Flowchart
    
//     ┌───────────┐
//     │   Start   │
//     └─────┬─────┘
//             ↓
//     ┌─────────────────┐
//     │ Read marks      │
//     └─────┬───────────┘
//         ↓
// ┌───────────────────┐
// │ marks >= 90 ?     │──Yes──► Print A
// └─────┬─────────────┘
//     No
//         ↓
// ┌───────────────────┐
// │ marks >= 80 ?     │──Yes──► Print B
// └─────┬─────────────┘
//     No
//         ↓
// ┌───────────────────┐
// │ marks >= 70 ?     │──Yes──► Print C
// └─────┬─────────────┘
//     No
//         ↓
// ┌───────────────────┐
// │ marks >= 60 ?     │──Yes──► Print D
// └─────┬─────────────┘
//     No
//         ↓
// ┌───────────────────┐
// │ marks >= 50 ?     │──Yes──► Print E
// └─────┬─────────────┘
//     No
//         ↓
//     Print Fail
//         ↓
//     ┌───────┐
//     │  End  │
//     └───────┘
    
//     Algorithm
    // i. Start
    // ii. Read marks of the student
    // iii. If marks ≥ 90, print Grade A
    // iv. Else if marks ≥ 80, print Grade B
    // v. Else if marks ≥ 70, print Grade C
    // vi. Else if marks ≥ 60, print Grade D
    // vii. Else if marks ≥ 50, print Grade E
    // viii. Else print Fail
    // ix. Stop
		
	
    
// #include <stdio.h>
// int main() {
// int marks;
// printf("Enter marks: ");
// scanf("%d", &marks);
// if (marks >= 90)
//     printf("Grade: A");
// else if (marks >= 80)
//     printf("Grade: B");
// else if (marks >= 70)
//     printf("Grade: C");
// else if (marks >= 60)
//     printf("Grade: D");
// else if (marks >= 50)
//     printf("Grade: E");
// else
//     printf("Grade: Fail");
// return 0;
// }
