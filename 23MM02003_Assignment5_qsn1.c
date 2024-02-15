#include <stdio.h>

int main() {
    int num, count = 0, i, digitSum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    int temp = num;

   
    while (num > 0) {
        num = num / 10;
        count++;
    }
    printf("The number of digits in %d is %d\n", temp, count);

    int arr[count];

    num = temp;
    for (i = 0; i < count; i++) {
        arr[i] = num % 10;
        num = num / 10;
    }

    printf("Array is: ");
    for (i = count - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < count; i++) {
        int isUnique = 1; 
        for (int j = i + 1; j < count; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0; 
                break;
            }
        }
        if (isUnique==1) {
            digitSum += arr[i]; 
        }
    }

    printf("Sum of unique digits: %d\n", digitSum);

    return 0;
}
