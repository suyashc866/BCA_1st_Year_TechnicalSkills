// 1. Given an array and a target, find number of occurrences of target in the array

#include <stdio.h>

int main() {
    int n, target, count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            count++;
        }
    }

    printf("Occurrences = %d", count);

    return 0;
}




// 2. Given an array, generate a new array containing square of all numbers

#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], square[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        square[i] = arr[i] * arr[i];
    }

    printf("New array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", square[i]);
    }

    return 0;
}






// 4. Given a list of integers and a target, find and print index of target

#include <stdio.h>

int main() {
    int n, target, index = -1;

    printf("Enter size of list: ");
    scanf("%d", &n);

    int list[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        if(list[i] == target) {
            index = i;
            break;
        }
    }

    if(index != -1)
        printf("Index = %d", index);
    else
        printf("Target not found");

    return 0;
}

