// My Solution
#include <stdio.h>

int main() {
    int size1, size2;

    
    scanf("%d", &size1);

    int arr1[size1];
    
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &size2);

    int arr2[size2];

    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int smallestCommon = 1e9;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j] && arr1[i] < smallestCommon) {
                smallestCommon = arr1[i];
            }
        }
    }

    // Output the result
    if (smallestCommon == 1e9) {
        printf("-1");
    } else {
        printf("%d", smallestCommon);
    }

    return 0;
}
