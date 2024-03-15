#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    
    float mean = (float)sum / n;

    
    int positiveSum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= mean) {
            positiveSum += arr[i];
        }
    }

    printf("%d", positiveSum);

    return 0;
}
