// My Solution
#include <stdio.h>

int main() {
    int size1, size2;
    scanf("%d", &size1);
    int arr1[20], arr2[20];
    
    for(int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    scanf("%d", &size2);
    
    for(int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int found = -1; 
    
    
    for(int i = 0; i < size1; i++) {
        int val = arr1[i];
        for(int j = 0; j < size2; j++) {
            if(arr2[j] == val) {
                if(found == -1 || val < found) {
                    found = val;
                }
            }
        }
    }
    
    printf("%d", found);
    return 0;
}
