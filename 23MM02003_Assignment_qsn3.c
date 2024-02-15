#include <stdio.h>

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    
    int n[4];
    n[0] = num / 1000 % 10;
    n[1] = num / 100 % 10;
    n[2] = num / 10 % 10;
    n[3] = num % 10;

    printf("All possible numbers that can be formed using the digits ");
    for (int i = 0; i < 4; i++) {
        printf("%d", n[i]);
    }
    printf(":\n");

    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                for (int l = 0; l < 4; l++) {
                    printf("%d%d%d%d\n", n[i], n[j], n[k], n[l]);
                }
            }
        }
    }

    return 0;
}
