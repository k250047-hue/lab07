#include <stdio.h>

int main() {
    int arr[10];
    int max, min, diff;

    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

  
    max = min = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    diff = max - min;
printf("Maximum value = %d\nMinimum value = %d\nDifference = %d", max,min,diff);


    return 0;
}
