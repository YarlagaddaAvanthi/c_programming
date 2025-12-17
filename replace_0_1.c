//write a program to replace all 0's with 1's in a number
#include <stdio.h>

int main() {
    int num, digit, result = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle the case if the number is 0
    if (num == 0) {
        result = 1;
    } else {
        while (num > 0) {
            digit = num % 10;
            if (digit == 0)
                digit = 1;

            result = result + digit * place;
            place *= 10;
            num /= 10;
        }
    }

    printf("Number after replacing 0's with 1's: %d\n", result);
    return 0;
}
