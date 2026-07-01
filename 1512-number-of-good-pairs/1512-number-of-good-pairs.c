int numIdenticalPairs(int* nums, int numsSize) {
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        int temp = nums[i];

        for (int j = i+1; j < numsSize; j++) {
            if (temp == nums[j]) {
                count++;
            }
        }
    }

    return count;
}