// 6. Write a program that will read radius and height of a cylinder and display its volume
// 7. Write a program that will read area of a square and display its side and perimeter
// 8. Write a program that will read purchase amount, give 10% discount and print the value of billing
// amount
// 9. Write a program that will read two numbers and swap the value with using third variable
// 10. Write a program that will read two numbers and swap the value without using third variable

// =======================================================================================================

// 6. Program to read radius and height of a cylinder and display its volume
// Formula
    // Volume = π × r² × h

// Flowchart

    // Start
    //   ↓
    // Read radius, height
    //   ↓
    // Calculate volume = 3.14 * r * r * h
    //   ↓
    // Display volume
    //   ↓
    // End

// Algorithm
    // 	1. Start
    // 	2. Read radius r and height h
    // 	3. Calculate volume using formula
    // 	4. Display volume
    // 	5. Stop

// C Program

#include <stdio.h>
int main() {
    float r, h, volume;
    printf("Enter radius and height: ");
    scanf("%f %f", &r, &h);
volume = 3.14 * r * r * h;
printf("Volume of cylinder = %.2f", volume);
    return 0;
}

// =======================================================================================================

// 7. Program to read area of a square and display its side and perimeter

// Formula
    // Side = √Area
    // Perimeter = 4 × Side

// Flowchart

    // Start
    //   ↓
    // Read area
    //   ↓
    // Calculate side = sqrt(area)
    //   ↓
    // Calculate perimeter = 4 * side
    //   ↓
    // Display side and perimeter
    //   ↓
    // End

// Algorithm
    // 	1. Start
    // 	2. Read area
    // 	3. Calculate side
    // 	4. Calculate perimeter
    // 	5. Display side and perimeter
    // 	6. Stop

// C Program

// #include <stdio.h>
// #include <math.h>
// int main() {
//     float area, side, perimeter;
//     printf("Enter area of square: ");
//     scanf("%f", &area);
// side = sqrt(area);
//     perimeter = 4 * side;
// printf("Side = %.2f\n", side);
//     printf("Perimeter = %.2f", perimeter);
//     return 0;
// }

// =======================================================================================================

// 8. Program to read purchase amount, give 10% discount and print billing amount

// Flowchart

    // Start
    //   ↓
    // Read purchase amount
    //   ↓
    // Calculate discount = 10% of amount
    //   ↓
    // Calculate billing amount
    //   ↓
    // Display billing amount
    //   ↓
    // End

// Algorithm
    // 	1. Start
    // 	2. Read purchase amount
    // 	3. Calculate discount
    // 	4. Calculate final bill
    // 	5. Display bill amount
    // 	6. Stop

// C Program

// #include <stdio.h>
// int main() {
//     float amount, discount, bill;
//     printf("Enter purchase amount: ");
//     scanf("%f", &amount);
// discount = amount * 0.10;
//     bill = amount - discount;
// printf("Billing amount = %.2f", bill);
//     return 0;
// }


// =======================================================================================================

// 9. Program to swap two numbers using third variable

// Flowchart

    // Start
    //   ↓
    // Read a, b
    //   ↓
    // temp = a
    // a = b
    // b = temp
    //   ↓
    // Display a, b
    //   ↓
    // End

// Algorithm
    // 	1. Start
    // 	2. Read two numbers
    // 	3. Store first number in temp
    // 	4. Swap values
    // 	5. Display swapped values
    // 	6. Stop

// C Program

// #include <stdio.h>
// int main() {
//     int a, b, temp;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
// temp = a;
//     a = b;
//     b = temp;
// printf("After swapping: a = %d, b = %d", a, b);
//     return 0;
// }



// =======================================================================================================


// 10. Program to swap two numbers without using third variable

// Flowchart

    // Start
    //   ↓
    // Read a, b
    //   ↓
    // a = a + b
    // b = a - b
    // a = a - b
    //   ↓
    // Display a, b
    //   ↓
    // End

// Algorithm
    // 	1. Start
    // 	2. Read two numbers
    // 	3. Swap using arithmetic operations
    // 	4. Display swapped values
    // 	5. Stop

// C Program

// #include <stdio.h>
// int main() {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
// a = a + b;
//     b = a - b;
//     a = a - b;
// printf("After swapping: a = %d, b = %d", a, b);
//     return 0;
// }

// I



// =======================================================================================================
