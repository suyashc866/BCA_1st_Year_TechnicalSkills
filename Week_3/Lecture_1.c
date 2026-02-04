
// 11. Write a program that will read a number and check it is even or odd
// 12. Write a program that will read two numbers a and b and check whether a divides b or not
// 13.Write a program that will read purchase and calculate bill by giving 10 % discount if purchase is
// greater than 10000 otherwise give 5% discount




// 1. Check whether a number is Even or Odd

// 	Flowchart
	
//    ┌─────────┐
//    │  Start  │
//    └────┬────┘
//         ↓
//  ┌──────────────┐
//  │ Read number n│
//  └────┬─────────┘
//         ↓
//  ┌──────────────────┐
//  │ n % 2 == 0 ?      │
//  └────┬─────────┬───┘
//       Yes        No
//        ↓          ↓
// ┌───────────┐ ┌───────────┐
// │ Print Even│ │ Print Odd │
// └────┬──────┘ └────┬──────┘
//         ↓              ↓
//        ┌──────────────┐
//        │     End      │
//        └──────────────┘
// 	Algorithm
// 		a. Start
// 		b. Read integer n
// 		c. If n % 2 == 0, print Even
// 		d. Else print Odd
// 		e. Stop
	
	

	
#include <stdio.h>
int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);
if (n % 2 == 0)
    printf("Even number");
else
    printf("Odd number");
return 0;
}

// 13. Check whether a divides b or not


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
//  │ b % a == 0 ?      │
//  └────┬────────┬────┘
//       Yes       No
//        ↓         ↓
// ┌─────────────┐ ┌────────────────┐
// │ a divides b │ │ a does not divide│
// └────┬────────┘ └────┬────────────┘
//         ↓                ↓
//        ┌──────────────┐
//        │     End      │
//        └──────────────┘
// 	Algorithm
// 		a. Start
// 		b. Read numbers a and b
// 		c. If b % a == 0, print a divides b
// 		d. Else print a does not divide b
// 		e. Stop
	

	
// #include <stdio.h>
// int main() {
// int a, b;
// printf("Enter a and b: ");
// scanf("%d %d", &a, &b);
// if (b % a == 0)
//     printf("a divides b");
// else
//     printf("a does not divide b");
// return 0;
// }

// 14. Purchase Bill with Discount

// 	Flowchart
	
//     ─────────┐
//    │  Start  │
//    └────┬────┘
//         ↓
//  ┌──────────────────┐
//  │ Read purchase amt│
//  └────┬─────────────┘
//         ↓
//  ┌──────────────────────────┐
//  │ purchase > 10000 ?        │
//  └────┬───────────┬────────┘
//       Yes          No
//        ↓            ↓
// ┌──────────────┐ ┌──────────────┐
// │ 10% discount │ │ 5% discount  │
// └────┬─────────┘ └────┬─────────┘
//         ↓                 ↓
//  ┌──────────────────┐
//  │ Print final bill │
//  └────┬─────────────┘
//         ↓
//        ┌──────────────┐
//        │     End      │
//        └──────────────┘
// 	Algorithm
// 		a. Start
// 		b. Read purchase amount
// 		c. If amount > 10000, discount = 10%
// 		d. Else discount = 5%
// 		e. Calculate final bill
// 		f. Display bill
// 		g. Stop
	


// #include <stdio.h>
// int main() {
// float purchase, discount, bill;
// printf("Enter purchase amount: ");
// scanf("%f", &purchase);
// if (purchase > 10000)
//     discount = purchase * 0.10;
// else
//     discount = purchase * 0.05;
// bill = purchase - discount;
// printf("Final Bill Amount = %.2f", bill);
// return 0;
// }

