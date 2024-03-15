//Prof's Solution
#include <stdio.h>

int main() {
    int size1, size2;
    scanf("%d", &size1);
    int arr1[20], arr2[20];
    
    // Reading first array
    for(int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    scanf("%d", &size2);
    // Reading second array
    for(int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int found = -1; // to store the smallest number found in both arrays
    
    // Checking each element of the first array to see if it exists in the second array
    for(int i = 0; i < size1; i++) {
        int val = arr1[i];
        for(int j = 0; j < size2; j++) {
            if(arr2[j] == val) { // If the element from the first array is found in the second array
                if(found == -1 || val < found) { // If it's the first found or smaller than the previous found
                    found = val;
                }
            }
        }
    }
    
    printf("%d", found); // Printing the result
    return 0;
}
