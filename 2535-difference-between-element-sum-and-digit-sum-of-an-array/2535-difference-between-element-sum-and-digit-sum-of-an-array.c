int digitsum(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num%10;
        sum += digit;
        num /= 10;
    }
    return sum;
}
int differenceOfSum(int* nums, int numsSize) {
    int digit = 0;
    int ele = 0;

    for (int i = 0; i < numsSize; i++) {
        ele += nums[i];
        digit += digitsum(nums[i]);
    }

    return abs(ele - digit);
}