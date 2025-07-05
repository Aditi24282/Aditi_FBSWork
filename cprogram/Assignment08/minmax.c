#include <stdio.h>

int main() {
    int i;
    int arr[5];
    int min, max;
    printf("Enter  elements:\n");
    for( i = 0; i <5; i++) {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];  
    

    for(i = 1; i < 5; i++) {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

}
