void reverse(int *nums, int left, int right) {
    while (left < right) {
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;

        left++;
        right--;
    }
}

void rotate(int* nums, int numsSize, int k) {

    // k = k % numsSize;

    // for (int i = 0; i < k; i++) {
    //     int temp = nums[numsSize - 1];
    //     for (int j = numsSize - 1; j > 0; j--) {
    //         nums[j] = nums[j-1];
    //     }
    //     nums[0] = temp;
    // }

    if (numsSize <= 1)
        return;


    k = k % numsSize;

    reverse(nums, 0, numsSize - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, numsSize - 1);

}