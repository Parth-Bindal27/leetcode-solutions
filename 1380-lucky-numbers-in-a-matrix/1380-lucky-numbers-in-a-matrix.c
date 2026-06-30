/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int *ans = (int*)malloc(sizeof(int));

    for (int i = 0; i < matrixSize; i++) {

        int min = matrix[i][0];
        int col = 0;

        for (int j = 1; j < matrixColSize[i]; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                col = j;
            }
        }

        int k;
        for (k = 0; k < matrixSize; k++) {
            if (matrix[k][col] > min)
                break;
        }

        if (k == matrixSize) {
            ans[0] = min;
            *returnSize = 1;
            return ans;
        }
    }

    *returnSize = 0;
    return ans;
}