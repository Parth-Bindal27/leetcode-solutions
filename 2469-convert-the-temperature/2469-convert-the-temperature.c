/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double* ans = (double*)malloc((2)*sizeof(double));

    double kelvin = celsius + 273.15;
    double fahrenheit = (celsius*1.80) + 32.00;

    ans[0] = kelvin;
    ans[1] = fahrenheit;

    *returnSize = 2;
    return ans;
}