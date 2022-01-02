#include <stdio.h>

int main() {
    int a[10], n, highest, highest2, i;

    printf("Enter number of COINS:");
    scanf("%d", &n);
    printf("Coins value:\n");
    for (i = 0; i < n; i++)
        {
        scanf("%d", &a[i]);
    }
    highest = a[0];
    for (i = 0; i < n; i++) {
        if (a[i] > highest) {
            highest = a[i];
        }
    }
    highest2 = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > highest2 && a[i] < highest)
            highest2 = a[i];
    }
    printf("Two Large Amounts %d and %d ", highest, highest2);
}

