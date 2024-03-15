// Prof's Solution

#include <stdio.h>

void findPath(int matrix[][100], int n, int x, int y, char* path, int pathIndex) {
    
    // If the destination is reached, print the path and return
    if (x == n - 1 && y == n - 1) {
        path[pathIndex] = '\0'; // Null terminate the string
        printf("%s\n", path);
        return;
    }

    // Move Right
    if (y + 1 < n && matrix[x][y + 1] == 1) {
        path[pathIndex] = 'R';
        findPath(matrix, n, x, y + 1, path, pathIndex + 1);
    }

    // Move Down
    if (x + 1 < n && matrix[x + 1][y] == 1) {
        path[pathIndex] = 'D';
        findPath(matrix, n, x + 1, y, path, pathIndex + 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int matrix[100][100];
    char path[200]; // Assuming the path will not be longer than 2n-1 steps

    // Read the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    findPath(matrix, n, 0, 0, path, 0);

    return 0;
}
