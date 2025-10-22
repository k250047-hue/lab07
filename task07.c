#include <stdio.h>

int main() {
    int arr[10], freq[100] = {0};
    int i;

    printf("Enter 10 integers: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", arr[i]);
        if(freq[arr[i]] == 0)     
            freq[arr[i]] = 1;
        else                        
            arr[i] = -1;
    }

    printf("Updated array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}





   
