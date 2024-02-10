#include <stdio.h>
#include <stdlib.h>
 
int abs_diff(int a, int b) {
    return (a > b) ? (a - b) : (b - a);
}
 
int main() {
    int matrix[5][5];
 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
 
    int row, col;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                row = i;
                col = j;
                break;
            }
        }
    }
 
    int moves = abs_diff(row, 2) + abs_diff(col, 2);
 
    printf("%d\n", moves);
 
    return 0;
}