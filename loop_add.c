#include <stdio.h>

int main() {
    int n, sum = 0, num;
    printf("How many numbers do you want to add? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    printf("Total sum = %d\n", sum);
    return 0;
}
